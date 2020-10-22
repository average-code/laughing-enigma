#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, phi;
    printf("##### Program to convert Cartesian to Polar #####\n\n");

    printf("Enter the cartesian co-ordinates x, y: ");
    scanf("%f %f", &x, &y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    phi = atan(x / y);

    printf("The Polar co-ordinates are:\n(r, phi) = (%f, %f)", r, phi);
}