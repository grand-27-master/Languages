import java.util.*;

public class Number{
	public static void main(String[] args)
	{
		String reg_no,phone_no;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter registration number:");
		reg_no=sc.nextLine();
		System.out.println("enter phone number:");
		phone_no=sc.nextLine();
		try
		{
			if(reg_no.length()<9 || reg_no.length()>9)
			System.out.println("invalid");
			else
			System.out.println("valid");
		}
		catch(IllegalArgumentException e)
		{
			System.out.println(e);
		}
		try
		{
			if(reg_no.length()<10 || reg_no.length()>10)
			System.out.println("invalid");
			else
			System.out.println("valid");
		}
		catch(NoSuchElementException e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("execution completed");
		}
	}
}