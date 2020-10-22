#include <stdio.h>

void main()
{
    int year;
    printf("### Program to find what day it is on 1st January of any given Year ###\n\n");

    printf("Enter the year: ");
    scanf("%d", &year);

    // if ((year%4 == 0 && year%100 != 0) && (year%400 == 0))
    // {
    //     year = year*366;
    // }
    // else
    // {
    //     year*365;
    // }


    if (year % 365 == 0)
    {
        printf("\n01/January/%d was/is a Monday");
    }
    else if (year % 365 == 1)
    {
        printf("\n01/January/%d was/is a Tuesday");
    }
    else if (year % 365 == 2)
    {
        printf("\n01/January/%d was/is a Wednesday");
    }
    else if (year % 365 == 3)
    {
        printf("\n01/January/%d was/is a Thursday");
    }
    else if (year % 365 == 4)
    {
        printf("\n01/January/%d was/is a Friday");
    }
    else if (year % 365 == 5)
    {
        printf("\n01/January/%d was/is a Saturday");
    }
    else if (year % 365 == 6)
    {
        printf("\n01/January/%d was/is a Sunday");
    }

}