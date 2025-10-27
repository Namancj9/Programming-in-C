/* 3.5. According to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
*/
#include <stdio.h>

int main()
{
    printf("Name - Naman Kataria\nSAP ID - 590025455\nCourse - BSC CS");
    printf("\n---------------------------------\n");
    int year, i;
    long total_odd_days = 0; 

    printf("Enter the year: ");
    scanf("%d", &year);

    for(i = 1; i < year; i++)
    {
        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
        {
            total_odd_days = total_odd_days + 366;
        }
        else
        {
            total_odd_days = total_odd_days + 365;
        }
    }
    int day_index = total_odd_days % 7;
    printf("\nJanuary 1st, %d falls on a: ", year);
    switch (day_index)
    {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
    }
    return 0;
}
