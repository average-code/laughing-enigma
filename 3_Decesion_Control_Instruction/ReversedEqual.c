#include<stdio.h>

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
        sum = remainder + sum * 10;
        temp = temp / 10;
    }
    
    if(sum == num)
    {
        printf("\nThe number is a Palindrome");
    }

    else
    {
        printf("\nThe number is not a palindrome");
    }
    
    return 0;
}