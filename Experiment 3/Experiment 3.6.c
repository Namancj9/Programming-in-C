/* 3.6. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three. */
#include <stdio.h>
int main() {
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, maxPerimeter, rectNo;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d %d", &l3, &b3);
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    maxPerimeter = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);
    rectNo = (maxPerimeter == p1) ? 1 : (maxPerimeter == p2 ? 2 : 3);

    printf("Rectangle %d has the highest perimeter = %d\n", rectNo, maxPerimeter);
    return 0;
}
