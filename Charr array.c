#include<stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    char str[n];

    for(i=1;i<=n;i++){
        scanf("%c",&str[i]);
    }

    for(i=1;i<=n;i++){
        printf("%c",str[i]);
    }

    return 0;
}
