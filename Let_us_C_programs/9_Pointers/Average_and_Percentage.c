#include<stdio.h>

void averageNpercentage(int *, int *);

void main()
{
    int average, percentage;

    printf("### Program to find average and percentage ###\n\n");
    averageNpercentage(&average, &percentage);
    printf("\n%d is the average\nand\n%d is the percentage", average, percentage);
}

void averageNpercentage(int *average, int *percentage)
{
    int a, b, c;
    printf("Enter marks in there subjects (out of 100): ");
    scanf("%d %d %d", &a, &b, &c);

    *average = (a + b + c)/3;
    *percentage = *average;
}