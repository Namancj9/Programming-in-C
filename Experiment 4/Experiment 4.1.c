/* 4.1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include <stdio.h>
int main() {
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");
    int num;
    int posCount = 0, negCount = 0, zeroCount = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        (num > 0) ? posCount++ : (num < 0 ? negCount++ : zeroCount++);

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of Positive numbers: %d", posCount);
    printf("\nCount of Negative numbers: %d", negCount);
    printf("\nCount of Zeroes: %d\n", zeroCount);
    return 0;
}
