/* WAP which accepts a number from user and count frequency of such a digits which are less than 6

Input : 2395
Output : 3

Input : 1018
Output : 3

Input : 9440
Output : 3

Input : 96672
Output : 1

*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iFrequency++;
        }

         iNo = iNo / 10;
    }

    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}

//  Time complexity:O(logn)
// Where N > 0