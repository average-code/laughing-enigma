#include <stdio.h>
#include <math.h>

int main()
{
    float l1, l2, g1, g2, d;
    printf("##### 0Program to find distance is nautical miles #####");
    printf("\n\nEnter value of L1 and L2: ");
    scanf("%f %f", &l1, &l2);
    printf("Enter value of L1 and L2: ");
    scanf("%f %f", &g1, &g2);

    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));

    printf("The distance in nautical miles is %f", d);

    return 0;
}