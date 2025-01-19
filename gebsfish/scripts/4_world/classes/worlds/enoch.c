modded class EnochData : WorldData {

    override void Init(){
        super.Init();
        Print("[gebsfish] [WORLDDATA ENOCH] [Init] Start load of data in World Data");
        GetGebSettingsConfig();
        Print("[gebsfish] [WORLDDATA ENOCH] [Init] End load of data in World Data");
    }

    override void InitYieldBank()
	{
		super.InitYieldBank();
		
		m_YieldBank.ClearAllRegisteredItems();
		Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Initializing yield data.");
		Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Initializing yield data.");
        //start loading fish data
        Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Adding fish to yield data");
        //fishies
        if (m_gebsConfig.Carp.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemCarp(m_gebsConfig.Carp.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Carp are catchable.");
        }
        if (m_gebsConfig.Mackerel.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemMackerel(m_gebsConfig.Mackerel.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Mackerel are catchable.");
        }
        if (m_gebsConfig.Sardines.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemSardines(m_gebsConfig.Sardines.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Sardines are catchable.");
        }
        if (m_gebsConfig.Bitterlings.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemBitterlings(m_gebsConfig.Bitterlings.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Bitterlings are catchable.");
        }
        if (m_gebsConfig.WalleyePollock.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemWalleyePollock(m_gebsConfig.WalleyePollock.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Pollock are catchable.");
        }
        if (m_gebsConfig.SteelheadTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemSteelheadTrout(m_gebsConfig.SteelheadTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Steelhead Trout are catchable.");
        }
        if (m_gebsConfig.Shrimp.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemShrimp(m_gebsConfig.Shrimp.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Shrimp are catchable.");
        }
        if (m_gebsConfig.NorthernPike.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebNorthernpike(m_gebsConfig.NorthernPike.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Northern Pike are catchable.");
        }
        if (m_gebsConfig.LargemouthBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebLargemouthbass(m_gebsConfig.LargemouthBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Largemouth Bass are catchable.");
        }
        if (m_gebsConfig.SmallmouthBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSmallmouthbass(m_gebsConfig.SmallmouthBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Smallmouth Bass are catchable.");
        }
        if (m_gebsConfig.Walleye.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebWalleye(m_gebsConfig.Walleye.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Walleye are catchable.");
        }
        if (m_gebsConfig.Sunfish.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSunfish(m_gebsConfig.Sunfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Sunfish are catchable.");
        }
        if (m_gebsConfig.WhiteBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebWhitebass(m_gebsConfig.WhiteBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] White Bass are catchable.");
        }
        if (m_gebsConfig.BlackBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBlackbass(m_gebsConfig.BlackBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Black Bass are catchable.");
        }
        if (m_gebsConfig.RainbowTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebRainbowTrout(m_gebsConfig.RainbowTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Rainbow Trout are catchable.");
        }
        if (m_gebsConfig.BrownTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBrownTrout(m_gebsConfig.BrownTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Brown Trout are catchable.");
        }
        if (m_gebsConfig.BrookTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBrookTrout(m_gebsConfig.BrookTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Brook Trout are catchable.");
        }
        if (m_gebsConfig.LakeTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebLakeTrout(m_gebsConfig.LakeTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Lake Trout are catchable.");
        }
        if (m_gebsConfig.CutthroatTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebCutthroatTrout(m_gebsConfig.CutthroatTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Cutthroat Trout are catchable.");
        }
        if (m_gebsConfig.Perch.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebPerch(m_gebsConfig.Perch.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Perch are catchable.");
        }
        if (m_gebsConfig.Catfish.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebCatfish(m_gebsConfig.Catfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Catfish are catchable.");
        }
        if (m_gebsConfig.Minnow.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebMinnow(m_gebsConfig.Minnow.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Minnow are catchable.");
        }
        if (m_gebsConfig.Bluegill.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBluegill(m_gebsConfig.Bluegill.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Bluegill are catchable.");
        }
        if (m_gebsConfig.Sauger.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSauger(m_gebsConfig.Sauger.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Sauger are catchable.");
        }
        if (m_gebsConfig.Bowfin.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBowfin(m_gebsConfig.Bowfin.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Bowfin are catchable.");
        }
        if (m_gebsConfig.SlimySculpin.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSlimysculpin(m_gebsConfig.SlimySculpin.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Slimy Sculpin are catchable.");
        }
        if (m_gebsConfig.Severum.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSeverum(m_gebsConfig.Severum.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Severum are catchable.");
        }
        //chatgpt
        if (m_gebsConfig.Crayfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebCrayfish(m_gebsConfig.Crayfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Crayfish are catchable.");
        }
        if (m_gebsConfig.Mahimahi.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebMahimahi(m_gebsConfig.Mahimahi.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Mahimahi are catchable.");
        }
        if (m_gebsConfig.Sailfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebSailfish(m_gebsConfig.Sailfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Sailfish are catchable.");
        }
        if (m_gebsConfig.Angelfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebAngelfish(m_gebsConfig.Angelfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Angelfish are catchable.");
        }
        if (m_gebsConfig.AsianSeaBass.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebAsianseabass(m_gebsConfig.AsianSeaBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Asian Sea Bass are catchable.");
        }
        if (m_gebsConfig.BlueMarlin.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBluemarlin(m_gebsConfig.BlueMarlin.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Blue Marlin are catchable.");
        }
        if (m_gebsConfig.Bonita.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBonita(m_gebsConfig.Bonita.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Bonita are catchable.");
        }
        if (m_gebsConfig.CherrySalmon.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebCherrysalmon(m_gebsConfig.CherrySalmon.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Cherry Salmon are catchable.");
        }
        if (m_gebsConfig.ChinookSalmon.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebChinooksalmon(m_gebsConfig.ChinookSalmon.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Chinook Salmon are catchable.");
        }
        if (m_gebsConfig.SockeyeSalmon.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebSockeyesalmon(m_gebsConfig.SockeyeSalmon.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Sockeye Salmon are catchable.");
        }
        if (m_gebsConfig.FlatheadMullet.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebFlatheadmullet(m_gebsConfig.FlatheadMullet.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Flathead Mullet are catchable.");
        }
        if (m_gebsConfig.LeopardShark.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebLeopardshark(m_gebsConfig.LeopardShark.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Leopard Shark are catchable.");
        }
        if (m_gebsConfig.PacificCod.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebPacificcod(m_gebsConfig.PacificCod.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Pacific Cod are catchable.");
        }
        if (m_gebsConfig.RedheadCichlid.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebRedheadcichlid(m_gebsConfig.RedheadCichlid.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Redhead Cichlid are catchable.");
        }
        if (m_gebsConfig.RoughneckRock.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebRoughneckrock(m_gebsConfig.RoughneckRock.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Roughneck Rock are catchable.");
        }
        if (m_gebsConfig.BlueTang.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBluetang(m_gebsConfig.BlueTang.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Blue Tang are catchable.");
        }
        if (m_gebsConfig.HairtailFish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebHairtailfish(m_gebsConfig.HairtailFish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Hairtail Fish are catchable.");
        }
        if (m_gebsConfig.HumpheadWrasse.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebHumpheadwrasse(m_gebsConfig.HumpheadWrasse.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Humphead Wrasse are catchable.");
        }
        if (m_gebsConfig.SiameseTigerfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebSiamesetigerfish(m_gebsConfig.SiameseTigerfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Siamese Tiger fish are catchable.");
        }
        if (m_gebsConfig.GreatWhiteShark.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebGreatwhiteshark(m_gebsConfig.GreatWhiteShark.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Great White Shark are catchable.");
        }
        if (m_gebsConfig.AngelShark.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebAngelshark(m_gebsConfig.AngelShark.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Angel Shark are catchable.");
        }
        if (m_gebsConfig.YellowfinTuna.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebYellowfintuna(m_gebsConfig.YellowfinTuna.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Yellowfin Tuna are catchable.");
        }
        if (m_gebsConfig.BloodClam.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBloodclam(m_gebsConfig.BloodClam.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Blood Clam are catchable.");
        }
        if (m_gebsConfig.Mussel.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebMussel(m_gebsConfig.Mussel.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Mussel are catchable.");
        }
        if (m_gebsConfig.BlackDevilSnail.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBlackdevilsnail(m_gebsConfig.BlackDevilSnail.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Black Devil Snail are catchable.");
        }
        if (m_gebsConfig.Starfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebStarfish(m_gebsConfig.Starfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Starfish are catchable.");
        }
        if (m_gebsConfig.KingCrab.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebKingcrab(m_gebsConfig.KingCrab.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] King Crab are catchable.");
        }
        if (m_gebsConfig.Jellyfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebJellyfish(m_gebsConfig.Jellyfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Jellyfish are catchable.");
        }
        if (m_gebsConfig.Lobster.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebLobster(m_gebsConfig.Lobster.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Lobster are catchable.");
        }
        if (m_gebsConfig.BlueLobster.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBlueLobster(m_gebsConfig.BlueLobster.CatchProbability));
            Print("[gebsfish] [WORLDDATA ENOCH] Blue Lobster are catchable.");
        }

        
        //finished loading fish data
        Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Loading fish complete.");

        //start loading junk data
        Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Adding junk to yield data.");

        foreach(string junk: m_gebsConfig.Junk.Classnames){
            Print("[gebsfish] [WORLDDATA ENOCH] " + junk + " is catchable as junk.");
            m_YieldBank.RegisterYieldItem(new YieldItemJunk(1,junk));
        }

        foreach(string containerjunk: m_gebsConfig.ContainerJunk.Classnames){
            Print("[gebsfish] [WORLDDATA ENOCH] " + containerjunk + " is catchable as junk.");
            m_YieldBank.RegisterYieldItem(new YieldItemJunkEmpty(1,junk));
        }

        
        //finished loading junk data
        Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Loading junk complete.");
    
        //load animal yeilds for traps (snare)
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRabbit(4));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRooster(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadFox(2));

        Print("[gebsfish] [WORLDDATA ENOCH] [InitYieldBank] Initialization of yield data complete.");

        YieldsMap banklist = m_YieldBank.GetYieldsMap();
        int bankcount = banklist.Count();
        for (int b = 0; b < bankcount; b++){
            YieldItemBase bankitem = banklist.GetElement(b);
            string bankitemstring = bankitem.GetType();
            Print("[gebsfish] [DEBUG] [WORLDDATA ENOCH] [CurrentList] Yield Item Registerd: " + bankitemstring + "; " + bankitem );
        }
	}
}