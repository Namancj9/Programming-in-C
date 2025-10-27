// Experiment 4.3.2
#include <stdio.h>

int main() {
    // Write C code here
    int rows = 5;
    
    for(int i = 1;i <=5; i++){
        
        for(int j =1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
