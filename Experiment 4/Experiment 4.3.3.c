// Experiment 4.3.3
#include <stdio.h>

int main() {
    // Write C code here
    int rows = 5;
    int num = 1;
    
    for(int i = 1;i <=rows; i++){
        
        for(int j =1; j<=i; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
