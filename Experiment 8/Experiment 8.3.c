#include <stdio.h>

void modifyValues(int *a, float *b, char *c) {
*a = *a + 10;        
*b = *b * 2;         
*c = *c + 1;         
}

int main() {
printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
printf("\n--------------------------------------------------------------------\n");
int i = 5;
float f = 3.5;
char ch = 'A';

printf("Before modification:\n");
printf("Integer: %d, Float: %.2f, Char: %c\n", i, f, ch);

// Pass addresses of variables to the function
modifyValues(&i, &f, &ch);

printf("After modification:\n");
printf("Integer: %d, Float: %.2f, Char: %c\n", i, f, ch);

return 0;

}
