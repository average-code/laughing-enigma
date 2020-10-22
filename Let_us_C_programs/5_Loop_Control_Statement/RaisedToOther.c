#include<stdio.h>
int main()
{
    float base, index, number = 1;
    printf("### Program to find One number raised to other ###\n\n");

    printf("Enter the base number: ");
    scanf("%f", &base);
    printf("Enter the index number: ");
    scanf("%f", &index);

    while (index>0)
    {
        number = number*base;
        index--;
    }
    printf("\n%.3f raised to %.3f is %.3f", base, index, number);

    return 0;
}