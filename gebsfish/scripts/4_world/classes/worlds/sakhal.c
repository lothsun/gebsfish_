modded class SakhalData : WorldData {

    override void Init(){
        super.Init();
        Print("[gebsfish] [WORLDDATA SAKHAL] [Init] Start load of data in World Data");
        GetGebSettingsConfig();
        Print("[gebsfish] [WORLDDATA SAKHAL] [Init] End load of data in World Data");
    }

    override void InitYieldBank()
	{
		super.InitYieldBank();
		
		m_YieldBank.ClearAllRegisteredItems();
		Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Initializing yield data.");
		Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Initializing yield data.");
        //start loading fish data
        Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Adding fish to yield data");
        //fishies
        if (m_gebsConfig.Carp.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemCarp(m_gebsConfig.Carp.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Carp are catchable.");
        }
        if (m_gebsConfig.Mackerel.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemMackerel(m_gebsConfig.Mackerel.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Mackerel are catchable.");
        }
        if (m_gebsConfig.Sardines.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemSardines(m_gebsConfig.Sardines.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Sardines are catchable.");
        }
        if (m_gebsConfig.Bitterlings.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemBitterlings(m_gebsConfig.Bitterlings.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Bitterlings are catchable.");
        }
        if (m_gebsConfig.WalleyePollock.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemWalleyePollock(m_gebsConfig.WalleyePollock.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Pollock are catchable.");
        }
        if (m_gebsConfig.SteelheadTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemSteelheadTrout(m_gebsConfig.SteelheadTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Steelhead Trout are catchable.");
        }
        if (m_gebsConfig.Shrimp.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new YieldItemShrimp(m_gebsConfig.Shrimp.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Shrimp are catchable.");
        }
        if (m_gebsConfig.NorthernPike.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebNorthernpike(m_gebsConfig.NorthernPike.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Northern Pike are catchable.");
        }
        if (m_gebsConfig.LargemouthBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebLargemouthbass(m_gebsConfig.LargemouthBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Largemouth Bass are catchable.");
        }
        if (m_gebsConfig.SmallmouthBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSmallmouthbass(m_gebsConfig.SmallmouthBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Smallmouth Bass are catchable.");
        }
        if (m_gebsConfig.Walleye.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebWalleye(m_gebsConfig.Walleye.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Walleye are catchable.");
        }
        if (m_gebsConfig.Sunfish.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSunfish(m_gebsConfig.Sunfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Sunfish are catchable.");
        }
        if (m_gebsConfig.WhiteBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebWhitebass(m_gebsConfig.WhiteBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] White Bass are catchable.");
        }
        if (m_gebsConfig.BlackBass.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBlackbass(m_gebsConfig.BlackBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Black Bass are catchable.");
        }
        if (m_gebsConfig.RainbowTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebRainbowTrout(m_gebsConfig.RainbowTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Rainbow Trout are catchable.");
        }
        if (m_gebsConfig.BrownTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBrownTrout(m_gebsConfig.BrownTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Brown Trout are catchable.");
        }
        if (m_gebsConfig.BrookTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBrookTrout(m_gebsConfig.BrookTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Brook Trout are catchable.");
        }
        if (m_gebsConfig.LakeTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebLakeTrout(m_gebsConfig.LakeTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Lake Trout are catchable.");
        }
        if (m_gebsConfig.CutthroatTrout.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebCutthroatTrout(m_gebsConfig.CutthroatTrout.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Cutthroat Trout are catchable.");
        }
        if (m_gebsConfig.Perch.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebPerch(m_gebsConfig.Perch.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Perch are catchable.");
        }
        if (m_gebsConfig.Catfish.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebCatfish(m_gebsConfig.Catfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Catfish are catchable.");
        }
        if (m_gebsConfig.Minnow.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebMinnow(m_gebsConfig.Minnow.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Minnow are catchable.");
        }
        if (m_gebsConfig.Bluegill.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBluegill(m_gebsConfig.Bluegill.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Bluegill are catchable.");
        }
        if (m_gebsConfig.Sauger.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSauger(m_gebsConfig.Sauger.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Sauger are catchable.");
        }
        if (m_gebsConfig.Bowfin.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebBowfin(m_gebsConfig.Bowfin.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Bowfin are catchable.");
        }
        if (m_gebsConfig.SlimySculpin.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSlimysculpin(m_gebsConfig.SlimySculpin.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Slimy Sculpin are catchable.");
        }
        if (m_gebsConfig.Severum.CatchProbability != 0){
            m_YieldBank.RegisterYieldItem(new gebSeverum(m_gebsConfig.Severum.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Severum are catchable.");
        }
        //chatgpt
        if (m_gebsConfig.Crayfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebCrayfish(m_gebsConfig.Crayfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Crayfish are catchable.");
        }
        if (m_gebsConfig.Mahimahi.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebMahimahi(m_gebsConfig.Mahimahi.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Mahimahi are catchable.");
        }
        if (m_gebsConfig.Sailfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebSailfish(m_gebsConfig.Sailfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Sailfish are catchable.");
        }
        if (m_gebsConfig.Angelfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebAngelfish(m_gebsConfig.Angelfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Angelfish are catchable.");
        }
        if (m_gebsConfig.AsianSeaBass.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebAsianseabass(m_gebsConfig.AsianSeaBass.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Asian Sea Bass are catchable.");
        }
        if (m_gebsConfig.BlueMarlin.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBluemarlin(m_gebsConfig.BlueMarlin.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Blue Marlin are catchable.");
        }
        if (m_gebsConfig.Bonita.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBonita(m_gebsConfig.Bonita.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Bonita are catchable.");
        }
        if (m_gebsConfig.CherrySalmon.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebCherrysalmon(m_gebsConfig.CherrySalmon.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Cherry Salmon are catchable.");
        }
        if (m_gebsConfig.ChinookSalmon.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebChinooksalmon(m_gebsConfig.ChinookSalmon.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Chinook Salmon are catchable.");
        }
        if (m_gebsConfig.SockeyeSalmon.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebSockeyesalmon(m_gebsConfig.SockeyeSalmon.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Sockeye Salmon are catchable.");
        }
        if (m_gebsConfig.FlatheadMullet.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebFlatheadmullet(m_gebsConfig.FlatheadMullet.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Flathead Mullet are catchable.");
        }
        if (m_gebsConfig.LeopardShark.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebLeopardshark(m_gebsConfig.LeopardShark.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Leopard Shark are catchable.");
        }
        if (m_gebsConfig.PacificCod.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebPacificcod(m_gebsConfig.PacificCod.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Pacific Cod are catchable.");
        }
        if (m_gebsConfig.RedheadCichlid.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebRedheadcichlid(m_gebsConfig.RedheadCichlid.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Redhead Cichlid are catchable.");
        }
        if (m_gebsConfig.RoughneckRock.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebRoughneckrock(m_gebsConfig.RoughneckRock.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Roughneck Rock are catchable.");
        }
        if (m_gebsConfig.BlueTang.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBluetang(m_gebsConfig.BlueTang.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Blue Tang are catchable.");
        }
        if (m_gebsConfig.HairtailFish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebHairtailfish(m_gebsConfig.HairtailFish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Hairtail Fish are catchable.");
        }
        if (m_gebsConfig.HumpheadWrasse.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebHumpheadwrasse(m_gebsConfig.HumpheadWrasse.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Humphead Wrasse are catchable.");
        }
        if (m_gebsConfig.SiameseTigerfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebSiamesetigerfish(m_gebsConfig.SiameseTigerfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Siamese Tiger fish are catchable.");
        }
        if (m_gebsConfig.GreatWhiteShark.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebGreatwhiteshark(m_gebsConfig.GreatWhiteShark.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Great White Shark are catchable.");
        }
        if (m_gebsConfig.AngelShark.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebAngelshark(m_gebsConfig.AngelShark.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Angel Shark are catchable.");
        }
        if (m_gebsConfig.YellowfinTuna.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebYellowfintuna(m_gebsConfig.YellowfinTuna.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Yellowfin Tuna are catchable.");
        }
        if (m_gebsConfig.BloodClam.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBloodclam(m_gebsConfig.BloodClam.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Blood Clam are catchable.");
        }
        if (m_gebsConfig.Mussel.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebMussel(m_gebsConfig.Mussel.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Mussel are catchable.");
        }
        if (m_gebsConfig.BlackDevilSnail.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBlackdevilsnail(m_gebsConfig.BlackDevilSnail.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Black Devil Snail are catchable.");
        }
        if (m_gebsConfig.Starfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebStarfish(m_gebsConfig.Starfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Starfish are catchable.");
        }
        if (m_gebsConfig.KingCrab.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebKingcrab(m_gebsConfig.KingCrab.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] King Crab are catchable.");
        }
        if (m_gebsConfig.Jellyfish.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebJellyfish(m_gebsConfig.Jellyfish.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Jellyfish are catchable.");
        }
        if (m_gebsConfig.Lobster.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebLobster(m_gebsConfig.Lobster.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Lobster are catchable.");
        }
        if (m_gebsConfig.BlueLobster.CatchProbability != 0) {
            m_YieldBank.RegisterYieldItem(new gebBlueLobster(m_gebsConfig.BlueLobster.CatchProbability));
            Print("[gebsfish] [WORLDDATA SAKHAL] Blue Lobster are catchable.");
        }

        
        //finished loading fish data
        Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Loading fish complete.");

        //start loading junk data
        Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Adding junk to yield data.");

        foreach(string junk: m_gebsConfig.Junk.Classnames){
            Print("[gebsfish] [WORLDDATA SAKHAL] " + junk + " is catchable as junk.");
            m_YieldBank.RegisterYieldItem(new YieldItemJunk(1,junk));
        }

        foreach(string containerjunk: m_gebsConfig.ContainerJunk.Classnames){
            Print("[gebsfish] [WORLDDATA SAKHAL] " + containerjunk + " is catchable as junk.");
            m_YieldBank.RegisterYieldItem(new YieldItemJunkEmpty(1,junk));
        }

        
        //finished loading junk data
        Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Loading junk complete.");
    
        //load animal yeilds for traps (snare)
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRabbit(4));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRooster(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadFox(2));

        Print("[gebsfish] [WORLDDATA SAKHAL] [InitYieldBank] Initialization of yield data complete.");
	}
}