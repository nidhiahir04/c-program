#include <stdio.h>

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    // Print the first two terms if n is greater than 0
    if (n > 0) {
        printf("%d ", first);
    }
    if (n > 1) {
        printf("%d ", second);
    }

    // Generate Fibonacci series up to nth term
    for (i = 3; i <= n; i++) {
        next = first + second; // Sum of the previous two numbers
        printf("%d ", next);

        // Update values for next iteration
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    // Ask user for number of terms in Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    fibonacci(n);

    return 0;
}