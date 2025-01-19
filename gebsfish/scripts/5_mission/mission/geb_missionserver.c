modded class MissionServer
{
	override void OnInit()
	{		
		super.OnInit();
		if(m_gebsConfig){
			Print("[gebsfish] Gebsfish V3.0 Loaded Successfully!");
		}
		
	}

	override void OnGameplayDataHandlerLoad() {
		super.OnGameplayDataHandlerLoad();

		YieldsMap mGeb_YieldsMapAll;
		mGeb_YieldsMapAll = GetGame().GetMission().GetWorldData().GetCatchYieldBank().GetYieldsMap();

		Print("[gebsfish] [DEBUG] [YieldMapOutput] Start YieldMapAll Dump");
		YieldItemBase yItem;
		int count = mGeb_YieldsMapAll.Count();
		for (int i = 0; i < count; i++){
			yItem = mGeb_YieldsMapAll.GetElement(i);
			Print("[gebsfish] [DEBUG] [YieldMapOutput] Yield Item: " + yItem);
			Print("[gebsfish] [DEBUG] [YieldMapOutput] Yield Item Type: " + yItem.GetType());
			Print("[gebsfish] [DEBUG] [YieldMapOutput] Yield Item Name: " + GetDisplayNameFromTypeName(yItem.GetType()));
		}

		Print("[gebsfish] [DEBUG] [YieldMapOutput] End YieldMapAll Dump");
		
	}

	string GetDisplayNameFromTypeName(string typeName) {

        // Find the display name in the config
        string displayName = "";
        if (GetGame().ConfigIsExisting("CfgVehicles " + typeName))
        {
            displayName = GetGame().ConfigGetTextOut("CfgVehicles " + typeName + " displayName");
        }
        
        // Return display name or fallback to type name if not found
        if (displayName == "")
        {
            return typeName; // Fallback to type name if no display name is found
        }

        return displayName;
    }
}