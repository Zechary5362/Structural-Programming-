// Palindrome Checker by Zechary ENE212-0094/2021
#include <stdio.h>

// Function to check if a number is palindrome
int checker(int num) {
    int reversed = 0, original = num;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if original number and reversed number are the same
    if (original == reversed)
        return 1; // its a Palindrome
    else
        return 0; // Not a palindrome
}
// Main function 
int main() {
    int n;
 
    // What's a palindrome? 
    printf("A palindrome is a number that reads the same forward and backwards ie 121 or 9889\n");
   
    // Take input from the user
    printf("\nEnter a number to check if it's a palindrome: ");
    scanf("%d", &n);

    // Check if the number is palindrome or not
    if (checker(n))
        printf("The number %d is a palindrome.\n", n);
    else
        printf("The number %d is not a palindrome.\n", n);

    return 0;
}
