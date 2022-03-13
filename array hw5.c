///5. Take a array and print in the reverse order.

#include<stdio.h>

int main()

{
    int i, n;
    printf("Enter the number n");
    scanf("%d",&n );

    int arr[n];

    for(i=1; i<=n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=n; i>=0;i--)
    printf("%d\n", arr[i]);


    return 0;
}
