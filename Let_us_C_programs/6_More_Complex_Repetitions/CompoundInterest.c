#include <stdio.h>
#include <math.h>
void main()
{
    float a, n, p, q, r;
    int i = 0;
    printf("### Program ot calculate amount of Total in compound interest ###\n\n");

    for (i = 0; i <= 10; i++)
    {
        printf("Enter the values of n, p, q, and r: ");
        scanf("%f %f %f %f", &n, &p, &q, &r);

        a = pow((p * (1 + (r / q))), (n * q));

        printf("\nFinal total amount is a = %f\n", a);
    }
}