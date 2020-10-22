#include<stdio.h>

float power(int, int);

void main()
{
    float a, b;
    printf("### Program to calculate the a to the index b ###\n\n");

    printf("Enter the base a: ");
    scanf("%f", &a);
    printf("Enter the index b: ");
    scanf("%f", &b);
    
    printf("%.2f to the power %.2f is %.3f", a, b, power(a,b));

}

float power(int a, int b)
{
    float result = 1;
    for(b; b>0;b--)
    {
        result = result*a;
    }

    return result;
    
}