#include <stdio.h>

int main()
{
    int i = 1;
    float temp = 1, sum = 1, factorial = 1;
    printf("### Program to add seven terms of the given series ###\n\n");

    for(i = 1; i<=6;i++)
    {
        factorial = factorial * i;
        temp = 1 / factorial;
        sum = sum + temp;
    }

    printf("\n%f is sum\n", sum);

    return 0;
}

// Everything that a for loop can do can be done via a while loop, and vice versa