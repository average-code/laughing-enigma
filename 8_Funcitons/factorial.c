#include <stdio.h>

int factorial(int);

void main()
{
    int number;
    printf("### Program to find the Factorial using function ###\n\n");

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("%d is the factorial of %d", factorial(number), number);
}

int factorial(int number)
{
    int factorial = 1;
    for (number; number > 1; number--)
    {
        factorial = factorial * number;
    }

    return factorial;
}