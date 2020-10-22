#include <stdio.h>
#include <math.h>

void sine(float *, float *);

void main()
{
    float x, sine = 0;
    printf("### Program to find Sine of a value by using expansion ###\n\n");

    printf("Enter the value of x: ");
    scanf("%f", &x);
    sine(&x, &sine);
}

void sine(float *x, float *sine)
{
    int i = 1;
    int factorial = 1;

    for (i = 1; i <= 10; i++)
    {
        factorial = factorial * i;

        if (i % 2 != 0)
        {
            sine = sine + pow(*x, i) / factorial;
        }
    }
}