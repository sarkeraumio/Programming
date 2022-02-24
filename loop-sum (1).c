#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("How many time, you want to run your loop?");
    scanf("%d",&n);

    i = 1;

    while(i<=n){

        sum = sum+i;
        printf("%d\n",sum);

        i = i+1;
    }
    printf("%d\n",sum);


    return 0;
}

H.W.
1. Print the sum of the all even numbers from 1 to n
2. Print the sum of the all odd numbers from 1 to n
3. Print the average of sum of 1 to n
4. 1+2+3+4+5+6+7+.......+n
5. 1+3+5+7+.........+n
6. 1+4+9+16........+n
1. Print n to 1,  not 1 to n using while loop
2. Print the sum of the square of the numbers from 1 to n

