#include <stdio.h>

void main()
{
    int number;
    int i, j;
    printf("### Program to find all Ramanujan number below 5000 \n\n");
    for (number = 0; number <= 5000; number++)
    {
        for (i = 1; i < 18; i++)
        {
            for (j = 1; j < 18; j++)
            //Capped i, and j at 18 as 18 cube is 5832,
            // as it exceeds the limit of 5000
            // and any further calculations will be useless in the case I have taken
            {
                if (number == i * i * i + j * j * j)
                {
                    printf("%d and %d give %d\nSo %d is a Ramanujan Number\n\n", i, j, number, number);
                }
            }
        }
    }
}