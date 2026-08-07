/* 
WAP which accepts one number from user and display all its non factors

Input  : 12
Output : 50

Input  : 10
Output : 37

*/

#include<stdio.h>

int SumNOnFact(int iNo)
{
    int iCnt = 0;
    int iSum =0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumNOnFact(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N > 0