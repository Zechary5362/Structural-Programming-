// Armstrong Number Checker by Zechary ENE212-0094/2021)
#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int counter(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int armstrong(int num) {
    int original = num;
    int numberofdigits = counter(num);
    int sum = 0;

    // Calculate the sum of digits raised to the power of the number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numberofdigits);
        num /= 10;
    }

    // Check if the sum equals the original number
    if (sum == original)
        return 1; // its an Armstrong number
    else
        return 0; // Not an Armstrong number
}

int main() {
    int n;

    // Take input from the user
    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &n);

    // Check if the number is an Armstrong number or not
    if (armstrong(n))
        printf("\nThe number %d is an Armstrong number.\n", n);
    else
        printf("\nThe number %d is not an Armstrong number.\n", n);

    return 0;
}
