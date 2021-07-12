def CheckDivision(iNo):

	if(iNo%5 == 0):
		return True
	else:
		return False
#-------------------------------------------------------------
iValue = int(input("Enter Number\n"))

if(CheckDivision(iValue) == True):
	print("Number is Divisible by 5")
else:
	print("Number is not Divisible by 5")