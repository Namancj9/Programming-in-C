/*WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32. */
#include <stdio.h>
int main(){
    float f, c;
    printf("Enter temperature in celcius:");
    scanf("%f",&c);
    f = (c * 9/5 + 32);
    printf("Temperature in fahrenheit:%.2f",f);
    return 0;
}
