///1 2 3 4 5 6 7 8 9 ........ n
#include<stdio.h>

int main()
{
    int i,n;

    printf("How many time, you want to run your loop?");
    scanf("%d",&n);

    i = 1;

    while(i<=n){

        printf("%d ",i);

        i = i+1;
    }


    return 0;
}

