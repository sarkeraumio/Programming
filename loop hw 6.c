
///Print the sum of the square of the numbers from 1 to n

#include<stdio.h>

    int main()
{
    int num, count = 1;

    printf("Enter a integer number greater than 1\n");
    scanf("%d", &num);

    while(count <= num)
    {
        printf("%d + ", (count*count));
        count++;
    }

    return 0;
}
