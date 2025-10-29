//Experiment 5.4. Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void counterFunction() {
    int normalCount = 1; 
    static int staticCount = 1; 

    printf("  [Normal] normalCount: %d\n", normalCount);
    printf("  [Static] staticCount: %d\n", staticCount);

    normalCount++;
    staticCount++;
    
    printf("  (After incrementing, staticCount is now %d)\n\n", staticCount);
}

int main() {
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");    

    printf("--- Calling function the 1st time ---\n");
    counterFunction();
    
    printf("--- Calling function the 2nd time ---\n");
    counterFunction();

    printf("--- Calling function the 3rd time ---\n");
    counterFunction();

    return 0;
}
