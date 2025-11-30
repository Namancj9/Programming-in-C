#include <stdio.h>

int main() {
printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
printf("\n--------------------------------------------------------------------\n");
int i = 42;
float f = 3.14;
char c = 'A';

int *ptr_i = &i;
float *ptr_f = &f;
char *ptr_c = &c;

printf("Integer value: %d, Pointer address: %p, Value via pointer: %d\n", i, (void*)ptr_i, *ptr_i);
printf("Float value  : %.2f, Pointer address: %p, Value via pointer: %.2f\n", f, (void*)ptr_f, *ptr_f);
printf("Char value   : %c, Pointer address: %p, Value via pointer: %c\n", c, (void*)ptr_c, *ptr_c);

return 0;

}
