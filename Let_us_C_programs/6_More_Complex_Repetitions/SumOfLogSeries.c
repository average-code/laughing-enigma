#include <stdio.h>
#include <math.h>

void main()
{
    int i = 2;
    float num, log;
    printf("### Program to Display Sum of Logarithm Series of a number ###\n\n");

    printf("Enter the number: ");
    scanf("%f", &num);

    log = ((num - 1)/num);
    
    for (i = 2; i <= 7; i++)
    {
        log = log + 0.5 * (pow(((num - 1) / num), i));
    }

    printf("\n%f is the sum of series for %.1f", log, num);
    
}