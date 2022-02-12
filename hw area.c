
#include<stdio.h>

int main()
{
    int b=10, h= 20, triangle, square, rectangle;
    float pi = 3.1416, circle;

    triangle= .5 *b*h;
    printf("area of triangle is %d\n", triangle);

    square= b*b;
    printf( "%d\n", square);

    rectangle= b*h;

    printf("%d\n", rectangle);

    circle= pi*b*b;

    printf("%2f\n", circle);


    return 0;
}
