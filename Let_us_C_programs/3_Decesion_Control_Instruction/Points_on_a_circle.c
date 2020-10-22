#include <stdio.h>
#include <math.h>

int main()
{
    float x0, y0, radius, x1, y1, distance;
    printf("##### Program to check position of a point w.r.t. to a Circle #####\n\n");

    printf("Enter co-ordinates of center of circle x0, y0: ");
    scanf("%f %f", &x0, &y0);
    printf("\nEnter radius of the circle: ");
    scanf("%f", &radius);
    printf("\nEnter co-ordinates of point to check x1, y1: ");
    scanf("%f %f", &x1, &y1);
    
    distance = sqrt(pow((x0-x1), 2)+ pow((y0 - y1), 2));

    if (distance>radius)
    {
        printf("\nThe point lies Outside the circle");
    }
    else if (distance<radius)
    {
        printf("\nThe point lies Inside the circle");
    }
    else
    {
        printf("\nThe point lies Ou circle");
    }

    return 0;
}