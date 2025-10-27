// Experiment 4.3.14
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        
        for (int k = 1; k < i; k++) {
            printf(" ");
        }

        for (int j = rows; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
