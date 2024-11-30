class gebsfishConfig{
    static const string CONFIG_VERSION = "1";

    //config location
    private const static string ModFolder = "$profile:\\gebsfish\\";
    private const static string SettingsConfigFile = "fishingsettings.json";
    private const static string FileName = "fishingsettings";
    private const static string FileType = ".json";

    //Config Reference 
    string ConfigVersion = "";
    ref GenSetConf GeneralSettings;
    ref MackerelConf Mackerel;
    ref CarpConf Carp;
    ref SardinesConf Sardines;
    ref BitterlingsConf Bitterlings;
    ref WalleyePollockConf WalleyePollock;
    ref SteelheadTroutConf SteelheadTrout;
    ref ShrimpConf Shrimp;
    ref NorthernPikeConf NorthernPike;
    ref LargemouthBassConf LargemouthBass;
    ref SmallmouthBassConf SmallmouthBass;
    ref WalleyeConf Walleye;
    ref SunfishConf Sunfish;
    ref WhiteBassConf WhiteBass;
    ref BlackBassConf BlackBass;
    ref RainbowTroutConf RainbowTrout;
    ref BrownTroutConf BrownTrout;
    ref BrookTroutConf BrookTrout;
    ref LakeTroutConf LakeTrout;
    ref CutthroatTroutConf CutthroatTrout;
    ref PerchConf Perch;
    ref CatfishConf Catfish;
    ref MinnowConf Minnow;
    ref BluegillConf Bluegill;
    ref SaugerConf Sauger;
    ref BowfinConf Bowfin;
    ref SlimySculpinConf SlimySculpin;
    ref SeverumConf Severum;
    ref CrayfishConf Crayfish;
    ref MahimahiConf Mahimahi;
    ref SailfishConf Sailfish;
    ref AngelfishConf Angelfish;
    ref AsianSeaBassConf AsianSeaBass;
    ref BlueMarlinConf BlueMarlin;
    ref BonitaConf Bonita;
    ref CherrySalmonConf CherrySalmon;
    ref ChinookSalmonConf ChinookSalmon;
    ref SockeyeSalmonConf SockeyeSalmon;
    ref FlatheadMulletConf FlatheadMullet;
    ref LeopardSharkConf LeopardShark;
    ref PacificCodConf PacificCod;
    ref RedheadCichlidConf RedheadCichlid;
    ref RoughneckRockConf RoughneckRock;
    ref BlueTangConf BlueTang;
    ref HairtailFishConf HairtailFish;
    ref HumpheadWrasseConf HumpheadWrasse;
    ref SiameseTigerfishConf SiameseTigerfish;
    ref GreatWhiteSharkConf GreatWhiteShark;
    ref AngelSharkConf AngelShark;
    ref YellowfinTunaConf YellowfinTuna;
    ref BloodClamConf BloodClam;
    ref MusselConf Mussel;
    ref BlackDevilSnailConf BlackDevilSnail;
    ref StarfishConf Starfish;
    ref KingCrabConf KingCrab;
    ref JellyfishConf Jellyfish;
    ref LobsterConf Lobster;
    ref BlueLobsterConf BlueLobster;

    ref JunkConf Junk;
    ref ContainerJunkConf ContainerJunk;

    void Load(){
        if (GetGame().IsDedicatedServer()){
            if (FileExist(ModFolder + SettingsConfigFile)){
                //If config exists, load file
                JsonFileLoader<gebsfishConfig>.JsonLoadFile(ModFolder + SettingsConfigFile, this);
                // If version mismatch, backup old version of json before replacing it
                if (ConfigVersion != CONFIG_VERSION){
                    JsonFileLoader<gebsfishConfig>.JsonSaveFile(ModFolder + FileName + "_old" + FileType, this);
                }
                else {
                    // Config exists and version matches, stop here.
                    return;
                }
            }
        //Save config file version to file
        ConfigVersion = CONFIG_VERSION;
        //Save general settings to file
        GeneralSettings = new GenSetConf;
        //Save CF Tools logging settings to file
        //Logging = new LogConf;
        //Save fish config data to file
        Mackerel = new MackerelConf;
        Carp = new CarpConf;
        Sardines = new SardinesConf;
        Bitterlings = new BitterlingsConf;
        WalleyePollock = new WalleyePollockConf;
        SteelheadTrout = new SteelheadTroutConf;
        Shrimp = new ShrimpConf;
        NorthernPike = new NorthernPikeConf;
        LargemouthBass = new LargemouthBassConf;
        SmallmouthBass = new SmallmouthBassConf;
        Walleye = new WalleyeConf;
        Sunfish = new SunfishConf;
        WhiteBass = new WhiteBassConf;
        BlackBass = new BlackBassConf;
        RainbowTrout = new RainbowTroutConf;
        BrownTrout = new BrownTroutConf;
        BrookTrout = new BrookTroutConf;
        LakeTrout = new LakeTroutConf;
        CutthroatTrout = new CutthroatTroutConf;
        Perch = new PerchConf;
        Catfish = new CatfishConf;
        Minnow = new MinnowConf;
        Bluegill = new BluegillConf;
        Sauger = new SaugerConf;
        Bowfin = new BowfinConf;
        SlimySculpin = new SlimySculpinConf;
        Severum = new SeverumConf;
        Crayfish = new CrayfishConf;
        Mahimahi = new MahimahiConf;
        Sailfish = new SailfishConf;
        Angelfish = new AngelfishConf;
        AsianSeaBass = new AsianSeaBassConf;
        BlueMarlin = new BlueMarlinConf;
        Bonita = new BonitaConf;
        CherrySalmon = new CherrySalmonConf;
        ChinookSalmon = new ChinookSalmonConf;
        SockeyeSalmon = new SockeyeSalmonConf;
        FlatheadMullet = new FlatheadMulletConf;
        LeopardShark = new LeopardSharkConf;
        PacificCod = new PacificCodConf;
        RedheadCichlid = new RedheadCichlidConf;
        RoughneckRock = new RoughneckRockConf;
        BlueTang = new BlueTangConf;
        HairtailFish = new HairtailFishConf;
        HumpheadWrasse = new HumpheadWrasseConf;
        SiameseTigerfish = new SiameseTigerfishConf;
        GreatWhiteShark = new GreatWhiteSharkConf;
        AngelShark = new AngelSharkConf;
        YellowfinTuna = new YellowfinTunaConf;
        BloodClam = new BloodClamConf;
        Mussel = new MusselConf;
        BlackDevilSnail = new BlackDevilSnailConf;
        Starfish = new StarfishConf;
        KingCrab = new KingCrabConf;
        Jellyfish = new JellyfishConf;
        Lobster = new LobsterConf;
        BlueLobster = new BlueLobsterConf;


        //Save junk config data to file
        Junk = new JunkConf;
        ContainerJunk = new ContainerJunkConf;





        //Save it
        Save();
        }
    }

    void Save(){
        if (!FileExist(ModFolder)){
            //if config folder doesn't exist, create it.
            MakeDirectory(ModFolder);
        }
        //Save JSON Config
        JsonFileLoader<gebsfishConfig>.JsonSaveFile(ModFolder + SettingsConfigFile, this);
    }
}


class GenSetConf {
    string FishQualityInfo = "Sets the base value for the fish quanity bar";
    float FishQuality = 1;
};

class LogConf {

};

//fish config data
class MackerelConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};

class CarpConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TFloatArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
};

class SardinesConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
};

class BitterlingsConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
};

class WalleyePollockConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 24;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};  
};

class SteelheadTroutConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 12;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};  
};

class ShrimpConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action.";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 1;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};  
};

class NorthernPikeConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  
};

class LargemouthBassConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class SmallmouthBassConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class WalleyeConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class SunfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class WhiteBassConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class BlackBassConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class RainbowTroutConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class BrownTroutConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class BrookTroutConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class LakeTroutConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class CutthroatTroutConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class PerchConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class CatfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1};  
};

class MinnowConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 5;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};

class BluegillConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};

class SaugerConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class BowfinConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class SlimySculpinConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class SeverumConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class CrayfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class MahimahiConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  
};

class SailfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  
};

class AngelfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  
};

class AsianSeaBassConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  
};

class BlueMarlinConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "sea";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  
};

class BonitaConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class CherrySalmonConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class ChinookSalmonConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class SockeyeSalmonConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class FlatheadMulletConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class LeopardSharkConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class PacificCodConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class RedheadCichlidConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class RoughneckRockConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class BlueTangConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class HairtailFishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class HumpheadWrasseConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class SiameseTigerfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 4;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class GreatWhiteSharkConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class AngelSharkConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class YellowfinTunaConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 1;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};  
};

class BloodClamConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};

class MusselConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};

class BlackDevilSnailConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};
class StarfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};
class KingCrabConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};
class JellyfishConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};
class LobsterConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};
class BlueLobsterConf {
    string EnvironmentInfo = "sea, pond, or both";
    string Environment = "pond";
    string CatchMethodInfo = "1 - rod, 2 - largetrap, 3 - smalltrap, 4 - rod and largetrap, 5 - rod and smalltrap, 6 - rod, largetrap and smalltrap, 7 - largetrap and smalltrap";
    int CatchMethod = 3;
    string MeatInfo = "MeatMin and MeatMax determine the minimum and maximum meat pieces for the fillet action. Future addition";
    int MeatMin = 1;
    int MeatMax = 1;
    string CatchProbInfo = "0-25; 0 means no chance to catch fish, 25 means high chance";
    int CatchProbability = 15;
    autoptr TStringArray CatchInfo = {"12AM", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "12PM", "1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM"};
    autoptr TIntArray CatchTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  
};


//Junk config data
class JunkConf {
    string JunkInfo = "Any item can be added here except for liquid containers.";
    autoptr TStringArray Classnames = {"Wellies_Brown", "Wellies_Grey", "Wellies_Green", "Wellies_Black"};
};

class ContainerJunkConf {
    string JunkInfo = "Add liquid containers here so they are empty when caught.";
    autoptr TStringArray Classnames = {"Pot"};
};

//Save config data
ref gebsfishConfig m_gebsConfig;
// Helper function to return config data storage object
static gebsfishConfig GetGebSettingsConfig(){
    if (!m_gebsConfig){
        Print("[gebsfish] Initializing gebsfish.");
        Print("[gebsfish] Loading JSON config file. ");
        m_gebsConfig = new gebsfishConfig;

        //Only load JSON config on the server
        if (GetGame().IsServer()){
            m_gebsConfig.Load();
        }
    }
    return m_gebsConfig;
}
//Prevent double printing in log file since it loads the yield data twice
bool gebsMissionLoaded = false;

class GebConversion{
    static int FishingMethod(int gebMethod){
        int geb_method;
        switch(gebMethod){
            case 1:
                geb_method = AnimalCatchingConstants.MASK_METHOD_ROD;
                break;
            case 2:
                geb_method = AnimalCatchingConstants.MASK_METHOD_FISHTRAP_LARGE;
                break;
            case 3:
                geb_method = AnimalCatchingConstants.MASK_METHOD_FISHTRAP_SMALL;
                break;
            case 4:
                geb_method = AnimalCatchingConstants.MASK_METHOD_ROD|AnimalCatchingConstants.MASK_METHOD_FISHTRAP_LARGE;
                break;
            case 5:
                geb_method = AnimalCatchingConstants.MASK_METHOD_ROD|AnimalCatchingConstants.MASK_METHOD_FISHTRAP_SMALL;
                break;
            case 6:
                geb_method = AnimalCatchingConstants.MASK_METHOD_ROD|AnimalCatchingConstants.MASK_METHOD_FISHTRAP_LARGE|AnimalCatchingConstants.MASK_METHOD_FISHTRAP_SMALL;
                break;
            case 7:
                geb_method = AnimalCatchingConstants.MASK_METHOD_FISHTRAP_LARGE|AnimalCatchingConstants.MASK_METHOD_FISHTRAP_SMALL;
                break;
            default:
                Print("[gebsfish] Config setting for fish environment not in range. Defaulting to Rod");
                geb_method = AnimalCatchingConstants.MASK_METHOD_ROD;
                break;
        }
        return geb_method;
    }

    static int Environment(string gebEnviro){
        int geb_enviro;
        switch(gebEnviro){
            case "sea":
            break;
                geb_enviro = AnimalCatchingConstants.MASK_ENVIRO_SEA;
            case "pond":
                geb_enviro = AnimalCatchingConstants.MASK_ENVIRO_POND;
                break;
            case "both": 
                geb_enviro = AnimalCatchingConstants.MASK_ENVIRO_WATER_ALL;
                break;
            default:
                Print("[gebsfish] Config setting for fish environment not in range. Defaulting to Pond");
                geb_enviro = AnimalCatchingConstants.MASK_ENVIRO_POND;
                break;
        }
        return geb_enviro;
    }

    static void FishingCoefs(TFloatArray coefs, out float[] input) {
        if(coefs.Count() != 24) return;
        input;
        Print(coefs);
        float fishing_coefs[24];

        for(int i = 0; i < 24; i++) {
            fishing_coefs[i] = coefs[i];
            Print("Fishing Coef:");
            Print(fishing_coefs[i]);
            Print("Coef:");
            Print(coefs[i]);
        }
        Print(fishing_coefs);
        input = fishing_coefs;
        Print(input);
    }

}