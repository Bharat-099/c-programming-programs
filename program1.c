#include<stdio.h>

float Storecircle(float iValue)
{
    float PI = 3.14;
    int iAns = 0;
    
    iAns = PI * iValue * iValue;
    return iAns;
}
int main()
{
    float iAr = 0.0f;
    float iBr = 0;

    printf("Enter the radius of Circle : \n");
    scanf("%f",&iAr);

    iBr = Storecircle(iAr);


    printf("iBr of Circle : %f\n",iBr);


    return 0;
}