import java.util.*;

public class Throw{
	public static void main(String[] args)
	{
		try
		{
			throw new ArithmeticException();
		}
		catch(ArithmeticException e)
		{
			System.out.println("exception due to throw keyword");
		}
	}
}	