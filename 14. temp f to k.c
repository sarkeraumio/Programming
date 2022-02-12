///  C/5 =

///(F-32)/9 = (K-273)/5


#include<stdio.h>
int main()
{
    float K,F;

    printf("Enter Temperature :");
    scanf("%f",&F);

    K= ((F-32)/9)*5 +273;

    printf("Temperature in Kelvin is %f\n",K);


    return 0;
}
