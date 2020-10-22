#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("##### Check Validity of a Triangle #####\n\n");
    printf("Enter Sides of triangle A, B, C: ");

    scanf("%f %f %f", &a, &b, &c);

    if ((a + b >= c) || (b + c >= a) || (c + a >= b) && (a > 0 && b > 0 && c > 0))
    {
        printf("\nIt is a valid triangle");
    }
    else
    {
        printf("\nThis triangle cannot exist :(");
    }

    return 0;
}
