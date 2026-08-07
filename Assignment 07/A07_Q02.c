/* 
WAP which accepts amount in US dollar and return its corresponding value in Indian currency. consider 1$ as 70 rupeese

Input  : 10
Output : 700

Input  : 3
Output : 210

Input  : 1200
Output : 84000

*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;
    
    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue;
    int iRet =0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("value in INR is %d",iRet);

    return 0;
}

// Time Complexity : O(1)