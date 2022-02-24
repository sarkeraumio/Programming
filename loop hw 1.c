/// print even from 1 to n
#include<stdio.h>

int main()
{

    int i,n;
    printf("value of n ");
    scanf("%d", &n);
    i=0;

    while(i<=n)
    {
        printf("%d ", i);
        i=i+2;
    }

    return 0;
}
