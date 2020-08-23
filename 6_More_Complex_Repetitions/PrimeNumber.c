#include <stdio.h>

void main()
{
    int number, i = 1, j = 0, temp;
    printf("##### Program to display prime numbers upto 300 #####\n\n");
    printf("1 is a prime number");
    for (i = 1; i <= 300; i++)
    {
        temp = 0;
        for (j = 1; j <= 150; j++)
        {
            if (i % j == 0)
            {
                temp++;
            }
        }
        if (temp == 2)
        {
            printf("\n%d is a prime number", i);
        }
    }
}