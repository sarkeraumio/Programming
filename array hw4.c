///4. Take an array of size n, find the average of the numbers.

#include<stdio.h>

int main()

{
    int i, n;
    float sum=0;

    printf("print the element nymber: ");
    scanf("%d", &n);

    float arr[n];

    for(i=1;i<=n;i++){
        scanf("%f", &arr[i]);
    }

    for(i=1;i<=n;i++){
            sum=sum+arr[i];
    }
    printf("%.2f\n", sum/n);

    return 0;
}
