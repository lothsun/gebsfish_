modded class ActionFishingNew: ActionContinuousBase {
    // override void OnFinishProgress(ActionData action_data){
    //     super.OnFinishProgress(action_data);

    //     FishingActionData data;
    //     if (Class.CastTo(data, action_data))
    //     {
    //         data.RollNextResultChance();

    //         // Trigger predator spawning after finishing the fishing progress
    //         TrySpawnPredator(data);
    //     }
    // }

    override void OnEnd(ActionData action_data){
        super.OnEnd(action_data);

        FishingActionData fad;
        if (Class.CastTo(fad, action_data))
        {
            // Animate the rod as a fallback
            fad.AnimateRod(false, true);

            // Check if the fishing result is successful
            if (fad.m_FishingResult == 1) // Assuming 1 indicates success
            {
                TrySpawnPredator(fad);
            }
            else if (Math.RandomFloat(0, 1) <= 0.01) // 1% chance to spawn even on failure
            {   
                if(!m_gebsConfig.GeneralSettings.DebugLogs){
                    Print("[gebsfish] [Predator] 1% random chance triggered. Spawning predator despite no catch.");   
                }
                TrySpawnPredator(fad);
            }
        }
    }

    void TrySpawnPredator(FishingActionData action_data){
        if (!GetGame().IsServer() || !m_gebsConfig) return;

        // Check if predator spawning is enabled
        if (!m_gebsConfig.GeneralSettings.PredatorSpawnEnabled)
        {
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Predator spawning is disabled.");
            }
            return;
        }

        // Global spawn chance check
        if (Math.RandomFloat(0, 1) > m_gebsConfig.GeneralSettings.PredatorSpawnChanceFishing)
        {
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Global spawn chance failed.");
            }
            return;
        }

        vector playerPosition = action_data.m_Player.GetPosition();
        PlayerBase player = action_data.m_Player;
        if(!m_gebsConfig.GeneralSettings.DebugLogs){
            Print("[gebsfish] [Predator] Global spawn chance passed. Selecting predator to spawn.");
        }

        PredatorEntry selectedPredator = GetRandomPredatorEntry();
        if (selectedPredator)
        {
            int count = Math.RandomInt(selectedPredator.MinCount, selectedPredator.MaxCount + 1);
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Spawning " + count + " " + selectedPredator.Classname + " around player.");
            }
            for (int i = 0; i < count; i++)
            {
                vector spawnPos = GenerateSpawnPosition(playerPosition, selectedPredator.MinRadius, selectedPredator.MaxRadius);
                SpawnPredator(selectedPredator.Classname, spawnPos);
            }

            //Send message to the player
            player.MessageAction("Your activities have attracted some company...");
        }
        else
        {   
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
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
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
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

    void SpawnPredator(string classname, vector position){
        Object predator = GetGame().CreateObject(classname, position, false, true);
        if (predator)
        {   
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Spawned " + classname + " at " + position.ToString());
            }
        }
        else
        {   
            if(!m_gebsConfig.GeneralSettings.DebugLogs){
                Print("[gebsfish] [Predator] Failed to spawn " + classname);
            }
        }
    }

}