#include<stdio.h>

void main()
{
    int num, temp;
    printf("\n##### Program to print Absolute value of a number #####\n\n");

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num>= 0)
    {
        printf("\nAbsolute value of %d is %d", num, num);
    }
    else
    {
        temp = (-1)*num;
        printf("\nAbsolute value of %d is %d", num, temp);
    }

}