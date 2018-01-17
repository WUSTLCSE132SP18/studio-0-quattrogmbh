
public class Heartbeat {
	public static void Main(String[] args)
	{
		try {
			Thread.sleep(1000);
			System.out.println("Heartbeat!");
		} catch (Exception e) {
			System.out.print(e.toString());
		}
	}
}
