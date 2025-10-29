//Experiment 5: Variable and Scope of Variable

//5.1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>

int globalVar = 10;

void function1() {
    printf("Inside function1:\n");
    printf("  Initial value of globalVar: %d\n", globalVar);
    
    globalVar = 20;
    printf("  Value of globalVar after modification: %d\n", globalVar);
}

void function2() {
    printf("Inside function2:\n");
    printf("  Value of globalVar (changed by function1): %d\n", globalVar);
    
    globalVar = 30;
    printf("  Value of globalVar after modification: %d\n", globalVar);
}

int main() {
   printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");
    printf("Inside main function:\n");
    printf("  Initial value of globalVar: %d\n", globalVar);

    function1();

    function2();

    printf("Back in main function:\n");
    printf("  Final value of globalVar (changed by function2): %d\n", globalVar);

    return 0;
}
