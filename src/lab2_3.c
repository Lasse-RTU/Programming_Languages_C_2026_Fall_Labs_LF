#include <stdio.h>
#include <math.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    int root_of_n = sqrt(n);
    for(int i = 2; i <= root_of_n; i++) {
        if(n % i == 0) {
            return 0;
        }
}
    return 1;
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    int validator = scanf("%d", &n);
    if (validator != 1) {
        printf("Please enter a valid integer!\n");
    } else if (n < 2) {
        printf("Error for n: %d. n cannot be smaller than 2\n", n);
    } else {
        if (is_prime(n) == 0) {
            printf("%d is not a prime number\n", n);
        } else {
            printf("%d is a prime number!\nAll primes up to %d are: \n", n, n);
            for (int i = 2; i <= n; i++) {
                if(is_prime(i) == 1) {
                    printf("%d\n", i);
                }
            }
        }
    }

    // TODO: validate input and print all primes up to n

    return 0;
}
