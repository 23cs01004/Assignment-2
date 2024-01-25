#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int x = a&1;
    (x==0)?printf("Even"):printf("Odd");
    return 0;
}