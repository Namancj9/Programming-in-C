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

printf("Original addresses:\n");
printf("Integer pointer: %p, Value: %d\n", (void*)ptr_i, *ptr_i);
printf("Float pointer  : %p, Value: %.2f\n", (void*)ptr_f, *ptr_f);
printf("Char pointer   : %p, Value: %c\n\n", (void*)ptr_c, *ptr_c);

ptr_i++;
ptr_f++;
ptr_c++;

printf("After increment:\n");
printf("Integer pointer: %p, Value: %d (may be garbage)\n", (void*)ptr_i, *ptr_i);
printf("Float pointer  : %p, Value: %.2f (may be garbage)\n", (void*)ptr_f, *ptr_f);
printf("Char pointer   : %p, Value: %c (may be garbage)\n\n", (void*)ptr_c, *ptr_c);

ptr_i--;
ptr_f--;
ptr_c--;

printf("After decrement (back to original):\n");
printf("Integer pointer: %p, Value: %d\n", (void*)ptr_i, *ptr_i);
printf("Float pointer  : %p, Value: %.2f\n", (void*)ptr_f, *ptr_f);
printf("Char pointer   : %p, Value: %c\n", (void*)ptr_c, *ptr_c);

return 0;

}
