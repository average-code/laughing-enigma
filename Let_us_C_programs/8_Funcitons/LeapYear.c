#include<stdio.h>

int leapYear(int);
void main()
{
    int year;
    printf("### Program to check if a year is leap or not using Function ###\n\n");

    printf("Enter the year: ");
    scanf("%d", &year);

    leapYear(year)? printf("%d is a leap year", year): printf("%d is not a leap year", year);
}
int leapYear(int year)
{
    return ((year%4==0 && year%100 != 0) || (year%400 ==0));
}