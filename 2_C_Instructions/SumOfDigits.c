#include <stdio.h>

int main()
{
    int num, sum = 0, remainder = 0, temp;
    printf("\n##### Program to print Sum of digits of a number #####\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }
    printf("Sum of digits of %d is %d", num, sum);

    return 0;
}