// A simple calculator for addition and subtraction  by Zechary  ENE212-0094/2021
#include<stdio.h>
int main()
{
//Declare Variables
double A, B, C, D;

// Take input from user
printf(" Enter  number1:");
scanf(" %lf",&A);
printf(" Enter number2:");
scanf("%lf",&B);

// Perform the arithmetic operations 
C = A + B ;
D = A - B ;

// Display output 
printf("\n The sum of number1  and number2 entered  = %.2lf" ,C);
printf ("\n The difference between number1 and number2 = %.2lf",D);
printf("\n The sum = %.2lf  and the difference = %.2lf",C,D);
    return 0;
}