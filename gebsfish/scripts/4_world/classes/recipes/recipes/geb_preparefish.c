modded class PrepareFish {
    const int RPC_PLAY_PREDATOR_SOUND = 2757509117; // Unique ID for the predator sound RPC
    override void Init() {
		super.Init();
        GetGebSettingsConfig();
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
		InsertIngredient(1,"geb_BlueFishKnife");
		InsertIngredient(1,"geb_OrangeFishKnife");
		InsertIngredient(1,"geb_GreenFishKnife");
		InsertIngredient(1,"geb_YellowFishKnife");
		InsertIngredient(1,"geb_RedFishKnife");
		InsertIngredient(1,"geb_PurpleFishKnife");
    }

    //gets called upon recipe's completion
    override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight){
		// Adjusts quantity of results to the quantity of the 1st ingredient
		super.Do(ingredients, player, results, specialty_weight);
        // Trigger predator spawning
        ItemBase knife = ingredients[1];
		TrySpawnPredator(player, knife);
	}

    void TrySpawnPredator(PlayerBase player, ItemBase item){
		if (!GetGame().IsServer() || !m_gebsConfig) return;

		// Check if predator spawning is enabled
		if (!m_gebsConfig.GeneralSettings.PredatorSpawnEnabled)
		{
			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Predator spawning is disabled.");
            }
			return;
		}

		// Global spawn chance check
		if (Math.RandomFloat(0, 1) > m_gebsConfig.GeneralSettings.PredatorSpawnChancePreparing)
		{
			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Global spawn chance failed.");
            }
			return;
		}

		vector playerPosition = player.GetPosition();
		if(m_gebsConfig.GeneralSettings.DebugLogs){
            Print("[gebsfish] [Predator] Global spawn chance passed. Selecting predator to spawn.");
        }

		PredatorEntry selectedPredator = GetRandomPredatorEntry();
		if (selectedPredator)
		{
			int count = Math.RandomInt(selectedPredator.MinCount, selectedPredator.MaxCount + 1);
			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Spawning " + count + " " + selectedPredator.Classname + " around player.");
            }

            bool soundPlayed = false; // Initialize sound flag
			for (int i = 0; i < count; i++)
			{
				vector spawnPos = GenerateSpawnPosition(playerPosition, selectedPredator.MinRadius, selectedPredator.MaxRadius);
				SpawnPredator(selectedPredator.Classname, spawnPos, player, soundPlayed);
			}

            //Send message to the player
            player.MessageAction("Your activities have attracted some company...");
		}
		else
		{
			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] No predator was selected to spawn.");
            }
		}
	}

	PredatorEntry GetRandomPredatorEntry(){
		float totalWeight = 0;
		foreach (PredatorEntry predator1 : m_gebsConfig.Predators)
		{
			totalWeight += predator1.SpawnChance;
		}

		if (totalWeight == 0)
		{
			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] No predators have valid spawn chances.");
            }
			return null;
		}

		float randomValue = Math.RandomFloat(0, totalWeight);
		float cumulativeWeight = 0;

		foreach (PredatorEntry predator : m_gebsConfig.Predators)
		{
			cumulativeWeight += predator.SpawnChance;
			if (randomValue <= cumulativeWeight)
			{
				return predator;
			}
		}

		return null;
	}

	vector GenerateSpawnPosition(vector center, float minRadius, float maxRadius){
		float angle = Math.RandomFloat(0, 360);
		float distance = Math.RandomFloat(minRadius, maxRadius);
		float xOffset = Math.Cos(angle) * distance;
		float zOffset = Math.Sin(angle) * distance;

		return Vector(center[0] + xOffset, center[1], center[2] + zOffset);
	}

	void SpawnPredator(string classname, vector position, PlayerBase triggeringPlayer, out bool soundPlayed){
		Object predator = GetGame().CreateObject(classname, position, false, true);
		if (predator)
		{

			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Spawned " + classname + " at " + position.ToString());
            }
            
            // Send RPC to play the sound for the triggering player
            if (!soundPlayed && GetGame().IsServer())
            {
                Param1<string> rpcData = new Param1<string>("PredatorWarning_SoundSet"); // Replace with your desired sound set
                triggeringPlayer.RPCSingleParam(RPC_PLAY_PREDATOR_SOUND, rpcData, true, triggeringPlayer.GetIdentity());
                Print("[PredatorSpawn] Sent RPC to play sound for triggering player.");
                soundPlayed = true; // Mark the sound as played
            }
		}
		else
		{
			if(m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Failed to spawn " + classname);
            }
		}
	}

//     void TrySpawnPredator(PlayerBase player, ItemBase item)
//     {
//         if (!GetGame().IsServer() || !m_gebsConfig) return;

//         // Check if predator spawning is enabled
//         if (!m_gebsConfig.GeneralSettings.PredatorSpawnEnabled)
//         {
//             Print("[PredatorSpawn] Predator spawning is disabled.");
//             return;
//         }

//         // Global spawn chance check
//         if (Math.RandomFloat(0, 1) > m_gebsConfig.GeneralSettings.PredatorSpawnChancePreparing)
//         {
//             Print("[PredatorSpawn] Global spawn chance failed.");
//             return;
//         }

//         vector playerPosition = player.GetPosition();
//         Print("[PredatorSpawn] Global spawn chance passed. Selecting predator to spawn.");

//         PredatorEntry selectedPredator = GetRandomPredatorEntry();
//         if (selectedPredator)
//         {
//             int count = Math.RandomInt(selectedPredator.MinCount, selectedPredator.MaxCount + 1);
//             Print("[PredatorSpawn] Spawning " + count + " " + selectedPredator.Classname + " around player.");
            
//             bool soundPlayed = false; // Initialize sound flag
//             for (int i = 0; i < count; i++)
//             {
//                 vector spawnPos = GenerateSpawnPosition(playerPosition, selectedPredator.MinRadius, selectedPredator.MaxRadius);
//                 SpawnPredator(selectedPredator.Classname, spawnPos, player, item, soundPlayed);
//             }

//             // Send message to the player
//             player.MessageAction("Your activities have attracted some company...");
//         }
//         else
//         {
//             Print("[PredatorSpawn] No predator was selected to spawn.");
//         }
//     }

//     void SpawnPredator(string classname, vector position, PlayerBase triggeringPlayer, ItemBase item, out bool soundPlayed)
//     {
//         static const string         PRED_WARNING_SOUND = "PredatorWarning_SoundSet";

//         protected EffectSound       m_PredatorWarningSound;

//         Object predator = GetGame().CreateObject(classname, position, false, true);
//         Print("[PredatorAudio] Test 1");
//         if (predator)
//         {
//             Print("[PredatorSpawn] Spawned " + classname + " at " + position.ToString());
//             Print("[PredatorAudio] Test 2");
//             // Play sound only if it hasn't been played yet
//             if (!soundPlayed )
//             {
//                 EffectSound effect_sound;
//                 Print("[PredatorAudio] Test 3");
//                 item.PlaySound( PRED_WARNING_SOUND, 10 );
//                 // effect_sound = SEffectManager.PlaySoundOnObject(PRED_WARNING_SOUND, item, 0, 0);
//                 Print("[PredatorAudio] Played sound: " + PRED_WARNING_SOUND + " for triggering player.");
//                 soundPlayed = true; // Mark the sound as played
//             }
//         }
//         else
//         {
//             Print("[PredatorSpawn] Failed to spawn " + classname);
//         }
//     }

//     PredatorEntry GetRandomPredatorEntry()
//     {
//         float totalWeight = 0;
//         foreach (PredatorEntry predator1 : m_gebsConfig.Predators)
//         {
//             totalWeight += predator1.SpawnChance;
//         }

//         if (totalWeight == 0)
//         {
//             Print("[PredatorSpawn] No predators have valid spawn chances.");
//             return null;
//         }

//         float randomValue = Math.RandomFloat(0, totalWeight);
//         float cumulativeWeight = 0;

//         foreach (PredatorEntry predator : m_gebsConfig.Predators)
//         {
//             cumulativeWeight += predator.SpawnChance;
//             if (randomValue <= cumulativeWeight)
//             {
//                 return predator;
//             }
//         }

//         return null;
//     }

//     vector GenerateSpawnPosition(vector center, float minRadius, float maxRadius)
//     {
//         float angle = Math.RandomFloat(0, 360);
//         float distance = Math.RandomFloat(minRadius, maxRadius);
//         float xOffset = Math.Cos(angle) * distance;
//         float zOffset = Math.Sin(angle) * distance;

//         return Vector(center[0] + xOffset, center[1], center[2] + zOffset);
//     }
}