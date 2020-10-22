#include <stdio.h>

int main()
{
    float distance;

    printf("Enter distance in Kilometers: ");
    scanf("%f", &distance);
    printf("\nDistance in:");
    printf("\nmeters is:      %.2f", distance * 1000);
    printf("\nfeet is:        %.2f", distance * 3280.84);
    printf("\ninches is:      %.2f", distance * 39370.079);
    printf("\ncentimeters is: %.2f", distance * 1000000);
    return 0;
}