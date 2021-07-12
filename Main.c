#include <stdio.h>                                      // Header file inclusion

typedef int BOOLEAN;                                    // Type cast int into BOOLEAN

#define TRUE 1                                          // Definition of macros  
#define FALSE 0

//////////////////////////////////////////////////////////////
//
// Function name :      CheckDivision
// Parameters :         Integer
// Return value :       BOOLEAN
// Description :        It is used to check number is divisible by 5 or not
// Author :             Akash Ankush Kashid
// Date :               3 Jun 2021
//
//////////////////////////////////////////////////////////////

// Function Defination
BOOLEAN CheckDivision(int iNo)                          // Input of the function          
{
    int iReult = 0;                                     // Local variable
    
    iReult = iNo % 5; 
                                                        // Mod operator which returns remainder after devision
    
    if(iReult == 0)                                     // If remainder is 1 means number is not divisible by 5
    {
        return TRUE;                                    // True indicates number is divisible by 5
    }
    else
    {                
        return FALSE;                                   // False indicates number is not divisible by 5
    }
}

int main()
{
    int iValue = 0;
    BOOLEAN bRet = FALSE;

    printf("Enter Number\n");                   
    scanf("%d", &iValue);

    bRet = CheckDivision(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Divisible by 5\n");
    }
    else
    {
        printf("Number is not Divisible by 5\n");
    }

    return 0;
}