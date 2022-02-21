/// Take a number and check the number is greater than 10, if right then check it is even or ODD.

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    if(n>10)
    {
        if(n%2==0)
            printf("Even\n");
        else
            printf("Odd\n");

    }
    else
        printf("No\n");


    return 0;
}


