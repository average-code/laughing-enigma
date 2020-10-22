#include<stdio.h>

void main()
{
    int hours, i = 0;
    printf("### Program to find Overtime Pay ###\n\n");

    while(i<=10)
    {
        printf("Enter total hours of Employee %d: ", i);
        scanf("%d", &hours);

        (hours >= 40) ? hours = hours-40: (hours= 0);
        printf("The overime salary is: %d\n\n", hours*12);

        i++;
    }
        
}