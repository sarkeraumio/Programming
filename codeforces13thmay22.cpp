#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;

    printf("Enter the number of elements you want to take input: ");
    scanf("%d",&n);

    int arr[n];

    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=n;i++){
        printf("%d %d\n",i,arr[i]);
    }


    return 0;
}
