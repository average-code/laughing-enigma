#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("### Program to print multiplication table of a number ###\n\n");

    printf("Enter number: ");
    scanf("%d", &num);
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}