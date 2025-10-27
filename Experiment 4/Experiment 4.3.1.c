// Experiment 4.3.1
#include <stdio.h>

int main() {
    // Write C code here
    int rows = 5;
    
    for(int i = 1;i <=rows; i++){
        
        for(int j =1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}
