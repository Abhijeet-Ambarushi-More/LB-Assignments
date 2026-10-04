/* 
WAP which accepts are in square feet and convert it into square meter (1 Square feet = 0.0929 Square meter)

Input  : 5
Output : 0.464515

Input  : 7
Output : 0.650321

*/

#include<stdio.h>

 double SquareMeter (int iArea)
{
    double dRes = 0.0;

    dRes = (0.0929 * iArea);
    
    return dRes;
}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area in square meter is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)