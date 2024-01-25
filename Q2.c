#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int greatest;
    greatest = (a>b)?a : b;
    (c>greatest)? printf("Max number is %d", c) :  printf("Max number is %d", greatest);
    return 0;
}