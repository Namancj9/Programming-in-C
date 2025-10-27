// Experiment 4.3.9
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int k = 1; k <= rows - i; k++) {
            printf("  ");
        }

        for (int j = rows; j > rows - i; j--) {
            printf("%d ", j);
        }

        for (int j = rows - i + 2; j <= rows; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int k = 1; k <= rows - i; k++) {
            printf("  ");
        }

        for (int j = rows; j > rows - i; j--) {
            printf("%d ", j);
        }

        for (int j = rows - i + 2; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
