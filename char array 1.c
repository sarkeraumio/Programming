#include<stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    char str[n];

    scanf("%s",str);

    for(i=0;i<=n;i++){
        printf("%c",str[i]);
    }

    return 0;
}

