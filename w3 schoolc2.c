/*
Write a C program to check whether a given number is positive or negative. Go to the editor
Test Data : 15
Expected Output :
15 is a positive number
*/

#include<stdio.h>
int main()

{
    int a;
    scanf("%d", &a);
    if(a>0){
        printf("%d is a positive integer", a);
    }
    else
        printf("%d is a negative integer", a);
    return 0;
}
