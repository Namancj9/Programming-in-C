/*Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on
its length and width. */
#include <stdio.h>
int main(){
    int length, breadth, perimeter, area;
    printf("Enter breadth:");
    scanf("%d",&length);
    printf("\nEnter length:");
    scanf("%d",&breadth);
    perimeter = 2*(length + breadth);
    area = length*breadth;
    printf("area:%d",area);
    printf("\nperimeter:%d",perimeter);
}
