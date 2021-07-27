class Myexception extends Exception{}

public class UserExc{
	public static void main(String[] args)
	{
		try
		{
			throw new Myexception();
		}
		catch(Myexception e)
		{
			System.out.print("this is an example of an user defined exception");
		}
	}
}