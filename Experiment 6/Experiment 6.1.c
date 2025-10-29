//Experiment 6: Array

//6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.#include <stdio.h>

#include <stdio.h>

int main() {
    
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");

    int n, i;
    int arr[100];
    int first, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("The second largest element is: %d\n", second);

    return 0;
}
