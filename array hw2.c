///2. Take a float array and find the sum of the values

#include<stdio.h>
int main()
{
    int i, n;
    float sum=0.0;

    printf("print the value of n in the element: ");
    scanf("%d", &n);
    float arr[n];
    for(i=1;i<=n;i++){
        scanf("%f", &arr[i]);
    }
    for (i=1;i<=n;i++){
        sum=sum+arr[i];
    }

    printf("%.2f\n", sum);

    return 0;
}
