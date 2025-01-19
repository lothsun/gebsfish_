/*

  CREATED BY PACKJC
  https://github.com/PackJC/gebsfish
  https://steamcommunity.com/sharedfiles/filedetails/?id=2757509117
  https://discord.com/invite/G8uSGZ8yyf
  Contributions welcome via github

*/


modded class MissionBase{ 

    override void InitWorldYieldDataDefaults(CatchYieldBank bank){
        super.InitWorldYieldDataDefaults(bank);
		
		if (bank)
		{	
			
			if(gebsMissionLoaded == true) {
				//Print("[gebsfish] [WORLDDATA DEFAULTS] missionbase load");
				GetGebSettingsConfig();

				bank.ClearAllRegisteredItems();
				//Initialize yield data
				Print("[gebsfish] [WORLDDATA DEFAULTS] [INIT] Initializing yield data.");
				//start loading fish data
				Print("[gebsfish] [WORLDDATA DEFAULTS] [FISH] Adding fish to yield data");
				//fishies
				if (m_gebsConfig.Carp.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemCarp(m_gebsConfig.Carp.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Carp are catchable.");
				}
				if (m_gebsConfig.Mackerel.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemMackerel(m_gebsConfig.Mackerel.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Mackerel are catchable.");
				}
				if (m_gebsConfig.Sardines.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemSardines(m_gebsConfig.Sardines.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Sardines are catchable.");
				}
				if (m_gebsConfig.Bitterlings.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemBitterlings(m_gebsConfig.Bitterlings.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Bitterlings are catchable.");
				}
				if (m_gebsConfig.WalleyePollock.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemWalleyePollock(m_gebsConfig.WalleyePollock.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Pollock are catchable.");
				}
				if (m_gebsConfig.SteelheadTrout.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemSteelheadTrout(m_gebsConfig.SteelheadTrout.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Steelhead Trout are catchable.");
				}
				if (m_gebsConfig.Shrimp.CatchProbability != 0){
					bank.RegisterYieldItem(new YieldItemShrimp(m_gebsConfig.Shrimp.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Shrimp are catchable.");
				}
				if (m_gebsConfig.NorthernPike.CatchProbability != 0){
					bank.RegisterYieldItem(new gebNorthernpike(m_gebsConfig.NorthernPike.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Northern Pike are catchable.");
				}
				if (m_gebsConfig.LargemouthBass.CatchProbability != 0){
					bank.RegisterYieldItem(new gebLargemouthbass(m_gebsConfig.LargemouthBass.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Largemouth Bass are catchable.");
				}
				if (m_gebsConfig.SmallmouthBass.CatchProbability != 0){
					bank.RegisterYieldItem(new gebSmallmouthbass(m_gebsConfig.SmallmouthBass.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Smallmouth Bass are catchable.");
				}
				if (m_gebsConfig.Walleye.CatchProbability != 0){
					bank.RegisterYieldItem(new gebWalleye(m_gebsConfig.Walleye.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Walleye are catchable.");
				}
				if (m_gebsConfig.Sunfish.CatchProbability != 0){
					bank.RegisterYieldItem(new gebSunfish(m_gebsConfig.Sunfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Sunfish are catchable.");
				}
				if (m_gebsConfig.WhiteBass.CatchProbability != 0){
					bank.RegisterYieldItem(new gebWhitebass(m_gebsConfig.WhiteBass.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] White Bass are catchable.");
				}
				if (m_gebsConfig.BlackBass.CatchProbability != 0){
					bank.RegisterYieldItem(new gebBlackbass(m_gebsConfig.BlackBass.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Black Bass are catchable.");
				}
				if (m_gebsConfig.RainbowTrout.CatchProbability != 0){
					bank.RegisterYieldItem(new gebRainbowTrout(m_gebsConfig.RainbowTrout.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Rainbow Trout are catchable.");
				}
				if (m_gebsConfig.BrownTrout.CatchProbability != 0){
					bank.RegisterYieldItem(new gebBrownTrout(m_gebsConfig.BrownTrout.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Brown Trout are catchable.");
				}
				if (m_gebsConfig.BrookTrout.CatchProbability != 0){
					bank.RegisterYieldItem(new gebBrookTrout(m_gebsConfig.BrookTrout.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Brook Trout are catchable.");
				}
				if (m_gebsConfig.LakeTrout.CatchProbability != 0){
					bank.RegisterYieldItem(new gebLakeTrout(m_gebsConfig.LakeTrout.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Lake Trout are catchable.");
				}
				if (m_gebsConfig.CutthroatTrout.CatchProbability != 0){
					bank.RegisterYieldItem(new gebCutthroatTrout(m_gebsConfig.CutthroatTrout.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Cutthroat Trout are catchable.");
				}
				if (m_gebsConfig.Perch.CatchProbability != 0){
					bank.RegisterYieldItem(new gebPerch(m_gebsConfig.Perch.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Perch are catchable.");
				}
				if (m_gebsConfig.Catfish.CatchProbability != 0){
					bank.RegisterYieldItem(new gebCatfish(m_gebsConfig.Catfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Catfish are catchable.");
				}
				if (m_gebsConfig.Minnow.CatchProbability != 0){
					bank.RegisterYieldItem(new gebMinnow(m_gebsConfig.Minnow.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Minnow are catchable.");
				}
				if (m_gebsConfig.Bluegill.CatchProbability != 0){
					bank.RegisterYieldItem(new gebBluegill(m_gebsConfig.Bluegill.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Bluegill are catchable.");
				}
				if (m_gebsConfig.Sauger.CatchProbability != 0){
					bank.RegisterYieldItem(new gebSauger(m_gebsConfig.Sauger.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Sauger are catchable.");
				}
				if (m_gebsConfig.Bowfin.CatchProbability != 0){
					bank.RegisterYieldItem(new gebBowfin(m_gebsConfig.Bowfin.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Bowfin are catchable.");
				}
				if (m_gebsConfig.SlimySculpin.CatchProbability != 0){
					bank.RegisterYieldItem(new gebSlimysculpin(m_gebsConfig.SlimySculpin.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Slimy Sculpin are catchable.");
				}
				if (m_gebsConfig.Severum.CatchProbability != 0){
					bank.RegisterYieldItem(new gebSeverum(m_gebsConfig.Severum.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Severum are catchable.");
				}
				if (m_gebsConfig.Crayfish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebCrayfish(m_gebsConfig.Crayfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Crayfish are catchable.");
				}
				if (m_gebsConfig.Mahimahi.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebMahimahi(m_gebsConfig.Mahimahi.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Mahimahi are catchable.");
				}
				if (m_gebsConfig.Sailfish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebSailfish(m_gebsConfig.Sailfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Sailfish are catchable.");
				}
				if (m_gebsConfig.Angelfish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebAngelfish(m_gebsConfig.Angelfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Angelfish are catchable.");
				}
				if (m_gebsConfig.AsianSeaBass.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebAsianseabass(m_gebsConfig.AsianSeaBass.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Asian Sea Bass are catchable.");
				}
				if (m_gebsConfig.BlueMarlin.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebBluemarlin(m_gebsConfig.BlueMarlin.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Blue Marlin are catchable.");
				}
				if (m_gebsConfig.Bonita.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebBonita(m_gebsConfig.Bonita.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Bonita are catchable.");
				}
				if (m_gebsConfig.CherrySalmon.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebCherrysalmon(m_gebsConfig.CherrySalmon.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Cherry Salmon are catchable.");
				}
				if (m_gebsConfig.ChinookSalmon.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebChinooksalmon(m_gebsConfig.ChinookSalmon.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Chinook Salmon are catchable.");
				}
				if (m_gebsConfig.SockeyeSalmon.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebSockeyesalmon(m_gebsConfig.SockeyeSalmon.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Sockeye Salmon are catchable.");
				}
				if (m_gebsConfig.FlatheadMullet.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebFlatheadmullet(m_gebsConfig.FlatheadMullet.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Flathead Mullet are catchable.");
				}
				if (m_gebsConfig.LeopardShark.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebLeopardshark(m_gebsConfig.LeopardShark.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Leopard Shark are catchable.");
				}
				if (m_gebsConfig.PacificCod.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebPacificcod(m_gebsConfig.PacificCod.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Pacific Cod are catchable.");
				}
				if (m_gebsConfig.RedheadCichlid.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebRedheadcichlid(m_gebsConfig.RedheadCichlid.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Redhead Cichlid are catchable.");
				}
				if (m_gebsConfig.RoughneckRock.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebRoughneckrock(m_gebsConfig.RoughneckRock.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Roughneck Rock are catchable.");
				}
				if (m_gebsConfig.BlueTang.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebBluetang(m_gebsConfig.BlueTang.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Blue Tang are catchable.");
				}
				if (m_gebsConfig.HairtailFish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebHairtailfish(m_gebsConfig.HairtailFish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Hairtail Fish are catchable.");
				}
				if (m_gebsConfig.HumpheadWrasse.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebHumpheadwrasse(m_gebsConfig.HumpheadWrasse.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Humphead Wrasse are catchable.");
				}
				if (m_gebsConfig.SiameseTigerfish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebSiamesetigerfish(m_gebsConfig.SiameseTigerfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Siamese Tiger fish are catchable.");
				}
				if (m_gebsConfig.GreatWhiteShark.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebGreatwhiteshark(m_gebsConfig.GreatWhiteShark.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Great White Shark are catchable.");
				}
				if (m_gebsConfig.AngelShark.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebAngelshark(m_gebsConfig.AngelShark.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Angel Shark are catchable.");
				}
				if (m_gebsConfig.YellowfinTuna.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebYellowfintuna(m_gebsConfig.YellowfinTuna.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Yellowfin Tuna are catchable.");
				}
				if (m_gebsConfig.BloodClam.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebBloodclam(m_gebsConfig.BloodClam.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Blood Clam are catchable.");
				}
				if (m_gebsConfig.Mussel.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebMussel(m_gebsConfig.Mussel.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Mussel are catchable.");
				}
				if (m_gebsConfig.BlackDevilSnail.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebBlackdevilsnail(m_gebsConfig.BlackDevilSnail.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Black Devil Snail are catchable.");
				}
				if (m_gebsConfig.Starfish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebStarfish(m_gebsConfig.Starfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Starfish are catchable.");
				}
				if (m_gebsConfig.KingCrab.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebKingcrab(m_gebsConfig.KingCrab.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] King Crab are catchable.");
				}
				if (m_gebsConfig.Jellyfish.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebJellyfish(m_gebsConfig.Jellyfish.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Jellyfish are catchable.");
				}
				if (m_gebsConfig.Lobster.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebLobster(m_gebsConfig.Lobster.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Lobster are catchable.");
				}
				if (m_gebsConfig.BlueLobster.CatchProbability != 0) {
					bank.RegisterYieldItem(new gebBlueLobster(m_gebsConfig.BlueLobster.CatchProbability));
					Print("[gebsfish] [WORLDDATA DEFAULTS] Blue Lobster are catchable.");
				}
				
				//finished loading fish data
				Print("[gebsfish] [WORLDDATA DEFAULTS] [FISH] Loading fish complete.");

				//start loading junk data
				Print("[gebsfish] [WORLDDATA DEFAULTS] [JUNK] Adding junk to yield data.");

				foreach(string junk: m_gebsConfig.Junk.Classnames){
					Print("[gebsfish] [WORLDDATA DEFAULTS] " + junk + " is catchable as junk.");
					bank.RegisterYieldItem(new YieldItemJunk(1,junk));
				}

				foreach(string containerjunk: m_gebsConfig.ContainerJunk.Classnames){
					Print("[gebsfish] [WORLDDATA DEFAULTS] " + containerjunk + " is catchable as junk.");
					bank.RegisterYieldItem(new YieldItemJunkEmpty(1,containerjunk));
				}
				
				//finished loading junk data
				Print("[gebsfish] [WORLDDATA DEFAULTS] [JUNK] Loading junk complete.");
			
				//load animal yeilds for traps (snare)
				bank.RegisterYieldItem(new YieldItemDeadRabbit(4));
				bank.RegisterYieldItem(new YieldItemDeadRooster(1));
				bank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
				bank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
				bank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
				bank.RegisterYieldItem(new YieldItemDeadFox(2));

				Print("[gebsfish] [WORLDDATA DEFAULTS] [INIT] Initialization of yield data complete.");

				// Print("[gebsfish] [WORLDDATA DEFAULTS] [DUMPSTACK] Start MisionBase Dump");
				// DumpStack();
				// Print("[gebsfish] [WORLDDATA DEFAULTS] [DUMPSTACK] End MisionBase Dump");
				// YieldsMap banklist = bank.GetYieldsMap();
				// int bankcount = banklist.Count();
				// for (int b = 0; b < bankcount; b++){
				// 	YieldItemBase bankitem = banklist.GetElement(b);
				// 	Print("[gebsfish] [WORLDDATA DEFAULTS] [DEBUG] [CurrentList] Yield Item Registerd: " + bankitem);
				// }
			}
			gebsMissionLoaded = true;
			// YieldsMap mGeb_YieldsMapAll;
			// mGeb_YieldsMapAll = GetGame().GetMission().GetWorldData().GetCatchYieldBank().GetYieldsMap();

			// Print("[gebsfish] [WORLDDATA DEFAULTS] [DEBUG] [YieldMapOutput] Start YieldMapAll Dump");
			// YieldItemBase yItem;
			// int count = mGeb_YieldsMapAll.Count();
			// for (int i = 0; i < count; i++){
			// 	yItem = mGeb_YieldsMapAll.GetElement(i);
			// 	Print("[gebsfish] [WORLDDATA DEFAULTS] [DEBUG] [YieldMapOutput] Yield Item: " + yItem);
			// }

			// Print("[gebsfish] [WORLDDATA DEFAULTS] [DEBUG] [YieldMapOutput] End YieldMapAll Dump");


		}
	}
};