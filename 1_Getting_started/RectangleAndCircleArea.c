#include <stdio.h>
#define PI 3.142 //Enables to use value later, if it were a varible then there is a possibility of it getting redfined

int main()
{
    float length, breadth, radius;

    printf("Enter length and bredth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    
    printf("\nEnter Radius of Circle: ");
    scanf("%f", &radius);
    
    printf("\nPerimeter of rectangle is: %.3f", (length + breadth) * 2);
    printf("\nArea of Rectangle is: %.3f", length * breadth);
    
    printf("\n\nCircumference of circle is: %.3f", 2 * PI * radius);
    printf("\nArea of the Circle is: %.3f", PI * radius * radius);
    
    return 0;
}