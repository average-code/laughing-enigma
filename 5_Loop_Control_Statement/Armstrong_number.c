#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    printf("### Program to find Armstrong number between 1 and 500 ###\n\n");

    while (i<=500)
    {
        if (i == pow((i % 10), 3) + pow(((i / 10) % 10), 3) + pow((i / 100), 3))
        {
            printf("%d is an Armstrong Number\n", i);
        }
        i++;
    }
    return 0;
}