/// average of sum of 1 to n

#include<stdio.h>

int main()
{

   int i,n,sum=0;

    printf("value of n= ");
    scanf("%d",&n);

    i = 1;

    while(i<=n){

        sum = sum+i;

        i = i+1;
    }
    printf("%d\n",sum/n);


    return 0;
}
