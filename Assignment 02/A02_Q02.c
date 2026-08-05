// WAP which accepts a number from user and print that number of * on the screen

#include<stdio.h>

void Display(int iNo)
{ 
    // Updater
     if (iNo < 0)
    {
        iNo=-iNo;
    }
    
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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