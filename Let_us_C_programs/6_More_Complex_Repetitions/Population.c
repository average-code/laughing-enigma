#include<stdio.h>

void main()
{
    int population = 100000, i;
    printf("### Program to display Population after end of each year last decade ###\n\n");

    printf("Current Population: %d\n", population);

    population = 34966;

    for(i = 1; i<=10; i++)
    {
        population = population*1.1;
        printf("Population in year %d: %d\n", i, population);
    }
}