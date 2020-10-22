#include <stdio.h>

int main()
{
    int a, b, c;
    printf("### Program to print all Pythagorean triplets below 30 ###\n\n");

    printf("Pythagorean Triplets are as follows: \n");
    for (a = 1; a <= 30; a++)
    {
        for (b = a; b <= 30; b++)
        {
            for (c = a; c <= 30; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("%d, %d, and %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}