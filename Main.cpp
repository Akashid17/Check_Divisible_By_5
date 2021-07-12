#include<iostream>

using namespace std;

class Arithmetic
{
	public:
		bool CheckDivision(int);
};

bool Arithmetic::CheckDivision(int iNo)
{
	if(iNo%5 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;

	cout<<"Enter Number\n";
	cin>>iValue;

	Arithmetic aobj;

	bool bRet =	aobj.CheckDivision(iValue);

	if(bRet == true)
	{
		cout<<"Number is Divisible by 5\n";
	}
	else
	{
		cout<<"Number is not Divisible by 5\n";
	}

	return 0;
}