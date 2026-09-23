#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum; //retunrs sum
}

// uses gauss formula because i like maths
int sum_to_n_gauss(int n) {
    return (n * (n + 1) / 2);
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");

    int validator = scanf("%d", &n);
    if (validator != 1) {
        printf("Please enter a valid integer!\n");
    } else if (n < 1) {
        printf("Error for n: %d. n cannot be smaller than 1\n", n);
    } else {
        printf("The sum of all integers up to %d is: %d\n", n, sum_to_n(n));
        printf("The sum of the integers up to %d with the gauss formula is also %d\n", n, sum_to_n_gauss(n));
    }
    return 0;
}
