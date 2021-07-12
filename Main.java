import java.lang.*;
import java.io.*;

class Arithmetic
{
	boolean CheckDivision(int iNo)
	{
		if(iNo % 5 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Main
{
	public static void main(String Arg[])
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Number");

		int iValue = 0;

		try
		{
			iValue = Integer.parseInt(bobj.readLine());
		}
		catch (Exception obj)
		{

		}

		Arithmetic aobj = new Arithmetic();

		boolean bRet = aobj.CheckDivision(iValue);

		if(bRet == true)
		{
			System.out.println("Number is Divisible by 5");
		}
		else
		{
			System.out.println("Number is not Divisible by 5");
		}
	}
}