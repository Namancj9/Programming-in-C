//Experiment 5.3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");    
    int mainVar = 10; 
    printf("In main: mainVar = %d\n", mainVar);

    if (mainVar > 5) {
        int block1Var = 20; 
        
        printf("  In Block 1: block1Var = %d\n", block1Var);
        
        printf("  In Block 1: mainVar = %d\n", mainVar);

        {
            int block2Var = 30; 
            printf("    In Block 2: block2Var = %d\n", block2Var);
            
            printf("    In Block 2: block1Var = %d\n", block1Var); 
            
            printf("    In Block 2: mainVar = %d\n", mainVar);   
        }
    }
    printf("In main: mainVar = %d\n", mainVar);
    return 0;
}
