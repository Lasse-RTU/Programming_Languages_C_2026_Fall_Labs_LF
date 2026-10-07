/*
 * week4_2_struct_student.c
 * Author: Lasse Mads Fenske
 * Student ID: 260ADM040
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    struct Student alice;
    struct Student bob;

    strcpy(alice.name, "Alice Johnson");
    alice.id = 1001;
    alice.grade = 9.1f;
    
    strcpy(bob.name, "Bob Smith");
    bob.id = 1002;
    bob.grade = 8.7f;

    printf("Student %d: %s, ID: %d, Grade: %.1f\n", 1, alice.name, alice.id, alice.grade);
    printf("Student %d: %s, ID: %d, Grade: %.1f\n", 2, bob.name, bob.id, bob.grade);
   
    return 0;
}
