/* 
WAP which returns the difference between Even factorial and odd factorial of given number

Input  : 5
Output : -7      (8-15)

Input  : -5
Output : -7       (8-15)

Input  : 10
Output : 2895     (3890-945)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo  = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }

    iDiff = iFactEven - iFactOdd;
    
    return iDiff;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N > 0