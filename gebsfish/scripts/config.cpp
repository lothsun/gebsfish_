
class CfgPatches
{
	class gebsfish_Scripts
	{
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Sounds_Effects"};
	};
};

class CfgAddons
{
	class PreloadBanks{};
	class PreloadAddons
	{
		class DayZ
		{
			list[] = {"DZ_Data","DZ_Scripts"};
		};
	};
};

class CfgMods 
{
	class gebsfish
	{
		name = "Project-gebsfish";
		dir = "gebsfish";
		creditsJson = "gebsfish/Scripts/Credits.json";
		inputs = "gebsfish/Scripts/Inputs.xml";
		type = "mod";

		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class engineScriptModule
			{
				files[] =
				{
					"gebsfish/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				files[] = 
				{
					"gebsfish/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				files[] = 
				{
					"gebsfish/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				files[] = 
				{
					"gebsfish/scripts/5_Mission"
				};
			};
		};
	};	
};

