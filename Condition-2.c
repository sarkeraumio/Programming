/// Take a number and check the number is greater than 10 and even or not.
/// Take a number and check the number is greater than 10, if right then check it is even or ODD.

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    if(n>10 && n%2 == 0 )      ///  && = and gate      || = or gate
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

