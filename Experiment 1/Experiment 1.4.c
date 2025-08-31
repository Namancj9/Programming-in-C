/*4. Write a C program to perform any for arithmetic operations on two variable.*/
#include <stdio.h>

int main() {
    int a = 10 ,b =20 ;
    int sum = a + b;
    int diff = a - b;
    int divi = a/b;
    int mul = a*b;
    printf("Sum: %d + %d = %d\n", a, b, sum);
    printf("Difference: %d - %d = %d\n", a, b, diff);
    printf("Division: %d / %d = %d\n", a, b, divi);
    printf("Multiplication: %d * %d = %d\n", a, b, mul);
   
    return 0;
}
