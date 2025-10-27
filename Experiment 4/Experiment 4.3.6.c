// Experiment 4.3.6
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
