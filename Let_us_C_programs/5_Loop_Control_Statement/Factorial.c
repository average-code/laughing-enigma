#include<stdio.h>

int main()
{
    int number, i = 1, factorial = 1;
    printf("### Program to find factorial of a number ###\n\n");

    printf("Enter the number: ");
    scanf("%d", &number);

    while (i<=number)
    {
        factorial = factorial*i;
        i++;
    }    
    printf("Factorial is %d", factorial);    

    return 0;
}