//4.5. Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
#include <stdio.h>

int main() {
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n--------------------------------\n");    
    int a, b, c, d;
    int L;

    printf("Enter the limit (L): ");
    scanf("%d", &L);

    printf("Ramanujan Numbers up to limit %d are:\n", L);

    // Nested loops to check all combinations
    for (a = 1; a <= L; a++) {
        for (b = a + 1; b <= L; b++) {
            for (c = a; c <= L; c++) {
                for (d = c + 1; d <= L; d++) {
                    if ((a * a * a + b * b * b) == (c * c * c + d * d * d) && (a != c && a != d && b != c && b != d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a * a * a + b * b * b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
