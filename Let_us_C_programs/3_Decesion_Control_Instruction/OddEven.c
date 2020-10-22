#include<stdio.h>

void main()
{
    int number;
    printf("##### Program to check if number is Even or Odd #####\n\n");

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number%2 == 0 && number !=0)
    {
        printf("\n%d is an Even number", number);
    }
    else if (number == 0)
    {
        printf("\nThe number Zero is neither odd nor even");
    }
    else
    {
        printf("\n%d is an Odd number", number);
    }
    
    
}