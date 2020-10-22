#include <stdio.h>

int main()
{
    int amount;
    int num1 = 0, num2 = 0, num5 = 0, num10 = 0, num50 = 0;
    int sum = 0;
    printf("##### Program to print minimum number of notes #####\n\n");

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 50)
    {
        num50 = amount/50;
        amount = amount - 50*num50;
    }
    if (amount >= 10)
    {
        num10 = amount/10;
        amount = amount - 10*num10;
    }
    if (amount >= 5)
    {
        num5 = amount/5;
        amount = amount - 5*num5;
    }
    if (amount >= 2)
    {
        num2 = amount/2;
        amount = amount - 2*num2;
    }
    if (amount >= 1)
    {
        num1 = amount/1;
        amount = amount - num1;
    }

    sum = num1 + num2 + num5 + num10 + num50;

    printf("Minimum number of notes is %d", sum);

    //This was not asked in the question but its a good thing to do
    printf("\n\nNumber of 1 Re. notes:  %d", num1);
    printf("\nNumber of 2 Rs. notes:  %d", num2);
    printf("\nNumber of 5 Rs. notes:  %d", num5);
    printf("\nNumber of 10 Rs. notes: %d", num10);
    printf("\nNumber of 50 Rs. notes: %d", num50);


    return 0;
}