modded class MissionServer
{
	override void OnInit()
	{		
		super.OnInit();
		FileReader.GetInstance();
		if(m_gebsConfig){
			Print("[gebsfish] Gebsfish V3.0 Loaded Successfully!");
		}
		
	}
}