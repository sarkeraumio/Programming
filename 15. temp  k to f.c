///(F-32)/9 = (K-273)/5


#include<stdio.h>
int main()
{
    float K,F;

    printf("Enter Temperature :");
    scanf("%f",&K);

    F= ((K-273)/5)*9 +32;

    printf("Temperature in Fahrenheit is %f\n",F);


    return 0;
}

