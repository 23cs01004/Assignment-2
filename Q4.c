#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    (year%100==0)?((year%400==0)?printf("Leap year"):printf("Non Leap Year")):((year%4==0)?printf("Leap year"):printf("Non Leap Year"));
    return 0;
}