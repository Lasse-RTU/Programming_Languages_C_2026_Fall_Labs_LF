#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion). why no recursion :(

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

// this should be unsigned long long as it can store higher numbers right?
// 0! is defined as 1 
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    int validator = scanf("%d", &n);
    if (validator != 1) {
        printf("Please enter a valid integer!\n");
    } else if (n < 0) {
        printf("Error for n: %d. n cannot be smaller than 0\n", n);
    } else {
        printf("The factorial of %d is: %lld\n", n, factorial(n));
    }
    return 0;
}
