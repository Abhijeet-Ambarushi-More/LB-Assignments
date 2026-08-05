/*
WAP which accepts number from user and if number is less than 50 print then print Small,
if its greater than 50 and less than 100 then print Medium,
if its greater than 100 then print Large

Input  : 75
Output : Medium

*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))  // will not give outut if 50 or 100 is given as input
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

//  Time complexity:O(1)