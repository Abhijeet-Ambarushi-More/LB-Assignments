/* 
WAP which accepts distance in kilometer and convert it into meter.(1 Kilometer = 1000 Meter)

Input  : 5
Output : 5000

Input  : 12
Output : 12000

*/

#include<stdio.h>

int KmToMeter(int iNo)
{
    int iDistanceInMeter = 0;

    iDistanceInMeter = iNo * 1000;
    
    return iDistanceInMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance \n");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("The distance in meter is %d",iRet);

    return 0;
}

// Time Complexity : O(1)