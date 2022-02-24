/// Print the sum of the all even numbers from 1 to n

#include<stdio.h>

int main()
{

   int i,n,sum=0;

    printf("How many time, you want to run your loop?");
    scanf("%d",&n);

    i = 0;

    while(i<=n){

        sum = sum+i;

        i = i+2;
    }
    printf("%d\n",sum);


    return 0;
}
