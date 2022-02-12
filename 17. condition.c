#include<stdio.h>
int main()
{

    int A, B;

    scanf("%d %d", &A, &B);

    if(A>B)
        printf( "%d is greater than %d\n", A, B);
    else
        printf("%d is greater than %d", B, A);

    return 0;
}


