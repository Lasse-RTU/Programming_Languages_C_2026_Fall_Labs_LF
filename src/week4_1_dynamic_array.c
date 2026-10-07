/*
 * week4_1_dynamic_array.c
 * Author: Lasse Mads Fenske
 * Student ID: 260ADM040
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Allocate memory for n integers, read them from the user,
 *   print their sum and average, and then free the memory.
 *
 *   Output must match the format in the Week 4 instructions exactly
 *   (it is checked by the autograder).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    arr = malloc(n *sizeof(int));
    // check if allocation worked
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    printf("Enter %d integers: ", n);

    // read n integers into the array
    for (int i = 0; i < n; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            // if scanf returns something else than 1 there was an issue reading it in
            printf("Invalid input.\n");
            free(arr);
            arr = NULL;
            return 1;
        }
    }

    // compute sum of integers
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double) sum / n;
    
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    // free space
    free(arr);
    arr = NULL;

    return 0;
}
