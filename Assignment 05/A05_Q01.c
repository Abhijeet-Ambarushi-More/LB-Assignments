/* 
WAP which accepts a number from user and print that number of $ and * on the screen

Input  : 5
Output : $       *       $       *       $       *       $       *       $       *

Input  : 3
Output : $       *       $       *       $       *

Input  : -3
Output : $       *       $       *       $       *

*/

#include<stdio.h>

void Pattern(int iNo)
{
     if (iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo > 0)
    {
        printf("$\t*\t");
        iNo--;
    }
}

int main()
{
    int iValue;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}