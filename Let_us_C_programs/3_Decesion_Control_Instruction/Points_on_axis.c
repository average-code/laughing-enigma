#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1;
    printf("##### Program check if a point lies on any axis or origin #####\n\n");

    printf("\nEnter the cartesian co-ordinates of point x1, y1: ");
    scanf("%f %f", &x1, &y1);

    if(x1 == 0 && y1 ==0)
    {
        printf("\nThe point is origin");
    }
    else if (x1==0 && y1!=0)
    {
        printf("\nThe point lies on x-axis");
    }
    else if (x1!=0 && y1 ==0)
    {
        printf("\nThe point lies on y-axis");
    }
    else
    {
        printf("\nThe point does not lie on any axis");
    }

    return 0;
}
    
    