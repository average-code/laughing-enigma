#include <stdio.h>

void main()
{
    int choice;
    printf("### Program to Select and Perform The Menu Events ###\n\n");

    printf("Select the choices:\n");

    do
    {
        printf("\n1 for Factorial of a Number");
        printf("\n2 for Prime of not: ");
        printf("\n3 for Odd or even: ");
        printf("\n4 to Exit: ");
        printf("\nAny other number to re-select the choice\nEnter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int factorial = 1, i;
            printf("\nEnter number to calculate Factorial: ");
            scanf("%d", &i);

            for (i; i > 1; --i)
            {
                factorial = factorial * i;
            }
            printf("%d is the Factorial", factorial);
            break;
        }

        case 2:
        {

            int number, i = 1, j = 0, temp;
            printf("\nEnter number to check if its prime or not: ");
            scanf("%d", &number);
            if (number == 1)
                printf("1 is a prime number");
            else
            {
                temp = 0;
                for (i = 2; i < number / 2; i++)
                {
                    if (number % i == 0)
                    {
                        temp++;
                    }
                }
                if (temp == 0)
                {
                    printf("\n%d is a Prime number", number);
                }
                else
                {
                    printf("\n%d is not a Prime number", number);
                }
            }
            break;
        }

        case 3:
        {
            int number;
            printf("\nEnter number to check if its odd or even: ");
            scanf("%d", &number);
            if (number % 2 == 0)
            {
                printf("\nThe number is even");
            }
            else if (number % 2 != 2)
            {
                printf("\nThe number is odd");
            }
            break;
        }

        case 4:
        {
            continue;
        }

        default:
        {
            printf("\nInvalid Input");
        }
        break;
        }

        printf("\nWant to execute the Program again?\n1 to continue\n0 to exit: ");
        fflush(stdin);
        scanf("%d", &choice);
    }

    while (choice != 0);

    printf("\nExiting the program");
}