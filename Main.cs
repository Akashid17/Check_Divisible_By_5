using System;

class Arithmetic
{
	public

	bool CheckDivision(int iNo)
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

class main
{
	public static void Main(string[] Arg)
	{
		Console.WriteLine("Enter Number");

		int iValue = Convert.ToInt32(Console.ReadLine());

		Arithmetic aobj = new Arithmetic();

		bool bRet = aobj.CheckDivision(iValue);

		if(bRet == true)
		{
			Console.WriteLine("Number is Divisible by 5");
		}
		else
		{
			Console.WriteLine("Number is not Divisible by 5");
		}
	}
}