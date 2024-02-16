// Fibonacci Series Generator by Zechary ENE212-0094/2021

#include <stdio.h>

// Function to generate Fibonacci series up to n
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d are: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}
// Main function 
int main() {
    int n;

    // Take input from the user
    printf("Enter the number up to which you want to generate Fibonacci series: ");
    scanf("%d", &n);

    // Generate Fibonacci series
    fibonacci(n);

    return 0;
}
