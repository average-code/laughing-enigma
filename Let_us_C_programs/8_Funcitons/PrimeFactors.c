#include <stdio.h>

void primeFactors(int);

void main()
{
    int number;
    printf("### Program to find Prime factors of a given Number using Function ###\n\n");
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("\nPrime factors of %d are: ", number);
    primeFactors(number);
}
void primeFactors(int number)
{
    int i, j, isPrime;
    for (i = 2; i <= number / 2; i++)
    {
        for (i = 2; i <= number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 1;
                for (j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime == 1)
                {
                    printf("%d, ", i);
                }
            }
        }
    }
}