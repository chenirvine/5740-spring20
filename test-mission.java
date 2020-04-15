final class Mission
{
	private int mission-id; 
	private static int mission-passcode=87654321;
	private String mission-place;

	public Mission(String ID)
{
	mission-id = ID;
	Random rand = new Random();
	mission-passcode = rand.nextInt(10000000);
}

public int get-mission-id()
{
	return mission-id;
}

public void set-mission-id(int new-id)
{
	mission-id = new-id;
}

public String get-mission-place()
{
	return mission-place;
}

public void set-mission-place(String new- mission-place)
{
	mission-place = new-mission-place;
}

}
