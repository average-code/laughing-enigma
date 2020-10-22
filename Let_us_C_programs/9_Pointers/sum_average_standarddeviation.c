#include <stdio.h>
#include <math.h>

void sum_mean_standdev(int *, int *, float *);

void main()
{

    int sum = 0, mean;
    float standardDeviation = 0;
    printf("### Program to find sum, mean and standard deviation ###\n\n");
    sum_mean_standdev(&sum, &mean, &standardDeviation);
    printf("%d is the sum\n%d is the mean\n%d is the standard deviation", sum, mean, standardDeviation);
}

void sum_mean_standdev(int *sum, int *mean, float *standardDeviation)
{
    int n1, n2, n3, n4, n5;
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        *sum = n1 + n2 + n3 + n4 + n5;
        *mean = *sum / 5;
        *standardDeviation = sqrt((pow((n1 - *mean), 2) + pow((n2 - *mean), 2) + pow((n3 - *mean), 2) + pow((n4 - *mean), 2) + pow((n5 - *mean), 2)) / 4);
    }
}