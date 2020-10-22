#include<stdio.h>

void main()
{
    int x, y;
    printf("##### Program to interchange two values #####\n\n");
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    x = x+y;
    y = x-y;
    x = x-y;

    printf("The interchanged values of x and y are: %d and %d", x, y);
}
    // There are two ways to do this operation
    // 1) Using a temporary variable
    //     You store the value of x in a temporary variable t, and assign the value of y to it
    //     then assign the value of t to y.   
    //     i.e.
    //     int t;
    //     t = x;
    //     x = y;
    //     y = t;

    // 2) Using Mathematical Modification
    //     You add the values of x and y, and assign it to x
    //     then substract y from the new x and assign the value to y
    //     finally substract y from x and assign it to itself
    //     i.e.
    //     x = x+y;
    //     y = x-y;
    //     x = x-y;