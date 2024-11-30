modded class MissionServer
{
	override void OnInit()
	{		
		super.OnInit();
		Print("[gebsfish] Gebsfish V2.0 Loaded Successfully!");
		Print(m_gebsConfig.Sardines.CatchTimes);
		// Print(m_gebsConfig.SteelheadTrout.CatchProbability);
		// Print(m_gebsConfig.Junk.Classnames[1]);
		// Print("[gebsfish] [DEBUG] " + AnimalCatchingConstants.MASK_METHOD_ROD);
		// Print("[gebsfish] [DEBUG] " + AnimalCatchingConstants.MASK_METHOD_FISHTRAP_LARGE);
		// Print("[gebsfish] [DEBUG] " + AnimalCatchingConstants.MASK_METHOD_FISHTRAP_SMALL);
		// Print("[gebsfish] [DEBUG] " + AnimalCatchingConstants.MASK_ENVIRO_POND);
		// Print("[gebsfish] [DEBUG] " + AnimalCatchingConstants.MASK_ENVIRO_SEA);
		// Print("[gebsfish] [DEBUG] " + AnimalCatchingConstants.MASK_ENVIRO_WATER_ALL);
		// Print(GebConversion.FishingMethod(m_gebsConfig.Carp.CatchMethod));
		// Print(GebConversion.FishingCoefs(m_gebsConfig.Carp.CatchTimes));
	}
}