///  C/5 = (F-32)/9 = (K-273)/5

/// c/5= (F-32)/9


#include<stdio.h>
int main()
{
    float F,C;

    printf("Enter Temperature :");
    scanf("%f",&C);

    F= (C*9)/5 + 32;

    printf("Temperature in Fahrenheit is %f\n",F);


    return 0;
}
