#include <stdio.h>

int main()
{
    float height, base, triangle;

    printf("enter value of base and height: ");
    scanf("%f %f", &base,&height);

    triangle= .5* base* height;

    printf("the area of triangle is %f" ,triangle);

    return 0;
}
