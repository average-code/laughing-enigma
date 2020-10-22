#include <stdio.h>
#include <math.h>

void main()
{
    float angle;
    printf("###### Program to display all Trigonometric Ratios ######\n\n");
    printf("Enter the angle: ");
    scanf("%f", &angle);
    printf("\nSine of angle is %f", sin(angle));
    printf("\n\nCosine of angle is %f", cos(angle));
    printf("\n\nTangent of angle is %f", tan(angle));
    printf("\n\nCotangent of angle is %f", 1 / tan(angle));
    printf("\n\nSecant of angle is %f", 1 / sin(angle));
    printf("\n\nCosecant of angle is %f", 1 / cos(angle));
}