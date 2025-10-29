#include <stdio.h>

int g = 10;

void func() {
    int x = 5;
    printf("Inside function: x = %d\n", x);
    printf("Inside function: g = %d\n", g);
}

int main() {
    func();
    printf("Inside main: g = %d\n", g);
    printf("Inside main: x = %d\n", x);
    return 0;
}
