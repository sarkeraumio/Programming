///1.Take a float array and print the value of the array

#include<stdio.h>

int main()
{
    int i, n;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    float arr[n];

    for(i=1; i<=n;i++)
    scanf("%f", &arr[i]);

    for(i=1;i<=n; i++)
    printf("%f %.2f\n",i, arr[i]);

    return 0;
}
