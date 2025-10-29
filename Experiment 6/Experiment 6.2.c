//6.2. WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include <stdio.h>

int main() {
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");
    
    int n, i;
    int arr[100];
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nCount of positive numbers: %d", pos);
    printf("\nCount of negative numbers: %d", neg);
    printf("\nCount of even numbers: %d", even);
    printf("\nCount of odd numbers: %d\n", odd);

    return 0;
}
