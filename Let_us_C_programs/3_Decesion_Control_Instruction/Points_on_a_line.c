#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3;
    float y1, y2, y3;
    float m1, m2;
    printf("##### Program check if Three points lie on one line or not #####\n\n");

    printf("\nEnter the cartesian co-ordinates x1, y1: ");
    scanf("%f %f", &x1, &y1);
    printf("\nEnter the cartesian co-ordinates x2, y2: ");
    scanf("%f %f", &x2, &y2);
    printf("\nEnter the cartesian co-ordinates x3, y3: ");
    scanf("%f %f", &x3, &y3);
    
    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);

    if(m1 == m2)
    {
        printf("\nThe three points lie on the same line");
    }
    else
    {
        printf("\nThe points do not lie on the same line");
    }
    
    return 0;
}