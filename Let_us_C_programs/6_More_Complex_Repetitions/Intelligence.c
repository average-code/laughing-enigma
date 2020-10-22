#include <stdio.h>

int main()
{
    float x;
    int y;
    printf("### Program to display intellect table\n\n");

    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            printf("For y = %d, x = %f, i = %f\n", y, x, (2 + (y + 0.5 * x)));
        }
    }
    return 0;
}