#include <stdio.h>

int main()
{
    int year;
    printf("##### Program to check if an Year is Leap or not #####\n\n");

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            printf("\nThe year %d is a Leap Year", year);
        }
        else
        {
            printf("\n%d is not a Leap year", year);
        }
    }

    else if (year % 400 == 0)
    {
        printf("\nThe year %d is a Leap Year", year);
    }
    else
    {
        printf("\n%d is not a Leap year", year);
    }

    return 0;
}