/* 
WAP which accepts one number from user and display the multiplication of its factors

Input  : 12
Output : 144    (1*2*3*4*6)

Input  : 13
Output : 1      (1)

Input  : 10
Output : 10     (1*2*5)

*/

#include<stdio.h>

int MultFactor(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    
    iMult = 1;

    for(iCnt = 1; iCnt <= (iNo/2)  ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = MultFactor(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N/2)
// Where N > 0
