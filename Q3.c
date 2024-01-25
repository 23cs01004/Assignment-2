#include <stdio.h>

int main()
{
    int days;
    printf("Enter no. of days: ");
    scanf("%d", &days);
    int years = days/365;
    days = days - years*365;
    int months = days/30;
    days = days - months*30;
    int weeks = days/7;
    days = days - weeks*7;
    printf("years: %d\nmonths: %d\nweeks: %d\ndays: %d", years, months, weeks ,days);
    return 0;
}