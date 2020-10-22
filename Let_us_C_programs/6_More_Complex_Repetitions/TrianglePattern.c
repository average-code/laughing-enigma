#include <stdio.h>
int main()
{
    int num, rows, col, space, i = 1;
    printf("Enter any number : ");
    scanf("%d", &num);
    for (rows = 1; rows <= num; rows++)
    {
        for (space = 1; space <= num - rows; space++)
        {
            printf(" ");
        }


        for (col = 1; col <= rows; col++, i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;

}