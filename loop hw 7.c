/// n to 1 reverse
#include<stdio.h>

int main()
{
    int i, n;
    printf("enter the value of n ");
    scanf("%d", &n);

    i=n;
    while(i>=1){

        printf("%d ", i);
        i--;
    }

    return 0;
}

