#include <stdio.h>

int main()
{
    int marks[5], sum = 0, i = 0;

    printf("Enter Marks in five subjects: ");

    for (i = 0; i < 5;)
    {
        scanf("%d", &marks[i]);

        if (0 <= marks[i] && marks[i]<= 100)
        {
            sum = sum + marks[i];
            i++;
        }
        else
        {
            printf("\nInvalid Marks, must be out of 100\nEnter the correct Marks: ");
        }
    }

    printf("\nAggregate Marks are: %d", sum/5);
    printf("\nPercentage is %.2f", ((float)sum / 500) * 100);
    return 0;
}