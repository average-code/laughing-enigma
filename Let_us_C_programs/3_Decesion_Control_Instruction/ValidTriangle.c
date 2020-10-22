#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("##### Check Validity of a Triangle #####\n\n");
    printf("Enter angles of triangle A, B, C in degrees: ");

    scanf("%f %f %f", &a, &b, &c);

    if (a+b+c == 180)
    {
        printf("\nIt is a valid triangle");
    }
    else
    {
        printf("\nThis triangle cannot exist :(");
    }
    
    return 0;
}
