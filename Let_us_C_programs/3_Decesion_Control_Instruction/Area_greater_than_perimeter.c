#include <stdio.h>

int main()
{
    float length, breadth;
    printf("### Program to compare Area and Perimeter of a Triangle ###\n\n");
    printf("Enter length and bredth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    
    printf("\nPerimeter of rectangle is: %.3f", (length + breadth) * 2);
    printf("\nArea of Rectangle is: %.3f", length * breadth);
    
    if ((length+breadth)*2> length*breadth)
    {
        printf("\nThe Perimeter is greater than the area");
    }
    else
    {
        printf("\nArea is greater than the perimeter");
    }  
    
    return 0;
}