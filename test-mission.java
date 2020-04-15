final class Mission
{
	private int missionid;
	private static int missionpasscode=87654321;
	private String missionplace;

	public Mission(int ID)
{
	missionid = ID;
	Random rand = new Random();
	missionpasscode = rand.nextInt(10000000);
}

public int GetMissionId()
{
	return missionid;
}

public void SetMissionId(int nid)
{
	missionid = nid;
}

public String GetMissionPlace()
{
	return missionplace;
}

public void SetMissionPlace(String nmissionplace)
{
	missionplace = nmissionplace;
}

}
