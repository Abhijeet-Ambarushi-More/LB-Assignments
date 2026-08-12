/* 
WAP which accepts width and height of rectangle  from user and calculate its area. 
(Area = Width * Height).

Input  : 5.3    9.78
Output : 51.834

*/

#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;
    
    return dArea;
}

int main()
{
    float fValue1 = 0.0f ; float fValue2 = 0.0f ;
    double dRet = 0.0;

    printf("Enter width \n");
    scanf("%f",&fValue1);

    printf("Enter height \n");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1, fValue2);

    printf("Area of Circle is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)