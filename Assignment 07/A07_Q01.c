/* 
WAP which accepts a number from user and display below pattern

Input  : 5
Output : *       *       *       *       *       $       $       $       $       $

Input  : 6
Output : *       *       *       *       *       *       $       $       $       $       $       $

Input  : -5
Output : *       *       *       *       *       $       $       $       $       $

Input  : 2
Output : *       *       $       $

*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

     if (iNo < 0)
    {
        iNo=-iNo;
    }

     iCnt = iNo;
    while(iCnt > 0)
    {
        printf("*\t");
        iCnt--;
    }

     iCnt = iNo;
    while(iCnt > 0)
    {
        printf("$\t");
        iCnt--;
    }
}

int main()
{
    int iValue;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity : O(2N)
// Where N > 0