// class GebsfishPredatorSpawnSystem {

//     PlayerBase player = action_data.m_Player;

//     void TrySpawnPredators(Playerbase player){
//         if (!m_gebsConfig || !player) return;

//         // Check if predator spawning is enabled
//         if (!m_gebsConfig.GeneralSettings.PredatorSpawnEnabled)
//         {
//             Print("[PredatorSpawn] Predator spawning is disabled.");
//             return;
//         }

//         // Global spawn chance check
//         if (Math.RandomFloat(0, 1) > m_gebsConfig.GeneralSettings.PredatorSpawnChance)
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

//             for (int i = 0; i < count; i++)
//             {
//                 vector spawnPos = GenerateSpawnPosition(playerPosition, selectedPredator.MinRadius, selectedPredator.MaxRadius);
//                 SpawnPredator(selectedPredator.Classname, spawnPos);
//             }
//         }
//         else
//         {
//             Print("[PredatorSpawn] No predator was selected to spawn.");
//         }
//     }

//     vector GenerateSpawnPosition(vector center, float minRadius, float maxRadius){
//         float angle = Math.RandomFloat(0, 360);
//         float distance = Math.RandomFloat(minRadius, maxRadius);
//         float xOffset = Math.Cos(angle) * distance;
//         float zOffset = Math.Sin(angle) * distance;

//         return Vector(center[0] + xOffset, center[1], center[2] + zOffset);
//     }

//     void SpawnPredator(string classname, vector position){
//         Object predator = GetGame().CreateObject(classname, position, false, true);
//         if (predator)
//         {
//             Print("[PredatorSpawn] Spawned " + classname + " at " + position.ToString());
//         }
//         else
//         {
//             Print("[PredatorSpawn] Failed to spawn " + classname);
//         }
//     }

//     // Select a single predator entry based on SpawnChance
//     PredatorEntry GetRandomPredatorEntry(){
//         float totalWeight = 0;
//         foreach (PredatorEntry predator : m_gebsConfig.Predators)
//         {
//             totalWeight += predator.SpawnChance;
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

// }