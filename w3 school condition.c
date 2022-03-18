/*
Write a C program to check whether a given number is even or odd. Go to the editor
Test Data : 15
Expected Output :
15 is an odd integer
*/

#include<stdio.h>
int main(){
int a;
printf("enter the value of the number: ");
scanf("%d", &a);

if(a%2==0){
    printf("%d is an even integer", a);
}
    else
        printf("%d is an odd number", a);

return 0;
}
