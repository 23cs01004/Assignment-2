#include <stdio.h>
#include <math.h>

int main()
{
    float meal, tip, tax;
    printf("Enter meal cost, tip percent, tax percent: ");
    scanf("%f %f %f", &meal, &tip, &tax);
    float total = meal + (meal*(tip+tax))/100.0;
    printf("Total cost: %f", round(total));
    return 0;
}