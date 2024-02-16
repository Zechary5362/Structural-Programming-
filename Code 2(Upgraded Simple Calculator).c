// Upgraded Simple Calculator by Zechary ENE212-0094/2021
#include<stdio.h>

// Functions
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

//Main Function 
int main()
{
    // Declare Variables
    double A, B;

    // Welcome Note
    printf("Welcome to Zechary's Simple Calculator ☺️☺️\n");
    
    //Take input from user 
    printf("\nEnter number1: ");
    scanf("%lf", &A);
    printf("Enter number2: ");
    scanf("%lf", &B);

    // Perform arithmetic operations using functions
    double sum = add(A, B);
    double difference = subtract(A, B);
    double product = multiply(A, B);
    double quotient = divide(A, B);

    // Display output
    printf("\nThe sum of number1 and number2 = %.2lf", sum);
    printf("\nThe difference between number1 and number2 = %.2lf", difference);
    printf("\nThe product of number1 and number2 = %.2lf", product);
    printf("\nThe value of number1 divided by number2 = %.2lf\n", quotient);
   
    //Thank you note 
    printf("\nThank you for using Zechary's Simple Calculator 🤗🤗\n");
    return 0;
}

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    } else {
        return num1 / num2;
    }
}
