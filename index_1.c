/*QUES-1: Program to input two numbers and display their sum */

#include <stdio.h>

int main() 
{
    int x,y,sum;
    
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y); 

    sum = x + y; 

    
    printf("Sum = %d", sum);

    return 0; 
}