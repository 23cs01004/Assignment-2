#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    (num%2 !=0 && 100<num<200)? printf("True"):printf("False");
    return 0;
}