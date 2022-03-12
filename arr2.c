#include<stdio.h>

int main()
{
    int n,i,sum=0;

    printf("Enter the number of elements you want to take input: ");
    scanf("%d",&n);

    int arr[n];

    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=n;i++){
        sum = sum + arr[i];
    }

    printf("%d\n",sum);

    return 0;
}

