// WAP which accepts a number from user and print that number of * on the screen

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    // Updater
     if (iNo < 0)
    {
        iNo=-iNo;
    }
    
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
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