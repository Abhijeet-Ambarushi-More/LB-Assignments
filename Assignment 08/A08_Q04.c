/* 
WAP which accepts temperature in fahrenheit and convert it into celcius (1 celcius = (Fahrenheit - 32) * (5/9))

Input  : 10
Output : -12.2222 (10-32) * (5/9)

Input  : 34
Output : 1.11111  (34-32) * (5/9)

*/

#include<stdio.h>

 double FhToCs (float fTemp)
{
    double dTemp = 0.0;

    dTemp = ((fTemp-32) * (5.0 /9.0 ));
    
    return dTemp;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit \n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("The Temperature in Celcius is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)