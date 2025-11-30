//Experiment 7:  Structures and Union
//7.1. Write a C program that uses functions to perform the following operations:
//•	a. Reading a complex number.
//•	b. Writing a complex number.
//•	c. Addition and subtraction of two complex numbers
//Note: represent complex number using a structure.
#include <stdio.h>

typedef struct {
  float real;
  float imag;
} 
Complex;

Complex readComplex() {
  Complex c;
  printf("Enter real part: ");
  scanf("%f", &c.real);
  printf("Enter imaginary part: ");
  scanf("%f", &c.imag);
  return c;
}

void writeComplex(Complex c) {
  if(c.imag >= 0)
    printf("%.2f + %.2fi\n", c.real, c.imag);
  else
    printf("%.2f - %.2fi\n", c.real, -c.imag);
}

Complex addComplex(Complex c1, Complex c2) {
  Complex result;
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
  return result;
}

Complex subtractComplex(Complex c1, Complex c2) {
  Complex result;
  result.real = c1.real - c2.real;
  result.imag = c1.imag - c2.imag;
  return result;
}

int main() {
  Complex c1, c2, sum, diff;

  printf("Enter first complex number:\n");
  c1 = readComplex();

  printf("Enter second complex number:\n");
  c2 = readComplex();

  printf("\nFirst complex number: ");
  writeComplex(c1);

  printf("Second complex number: ");
  writeComplex(c2);

  sum = addComplex(c1, c2);
  diff = subtractComplex(c1, c2);

  printf("\nSum of complex numbers: ");  
  writeComplex(sum);

  printf("Difference of complex numbers: ");
  writeComplex(diff);

  return 0;
}

