#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("##### Area of Triagle by Sides #####\n\n");
    printf("Enter sides of triangle a, b, c: ");

    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea of given triangle is %f", area);
    return 0;
}
