#include <stdio.h>

int main()
{
    int height_A0 = 1189, width_A0 = 841;
    //While taking the height and width it may seem like a good idea to take them
    //as float variables, but then the final values are always integer on milimeter scale
    //Hence, it is better to prefer int datatype for these type of problems
    int i = 0;
    printf("Dimensions of A0 paper are %d mm * %d mm\n", height_A0, width_A0);
    for (i = 1; i <= 8; i++)
    {
        if (height_A0 > width_A0)
        {
            height_A0 = height_A0 / 2;
        }
        else
        {
            height_A0 = height_A0 + width_A0;
            width_A0 = height_A0 - width_A0;
            height_A0 = height_A0 - width_A0;

            height_A0 = height_A0 / 2;
        }
        printf("Dimensions of A%d paper are %d mm * %d mm\n", i, height_A0, width_A0);
    }
    return 0;
}