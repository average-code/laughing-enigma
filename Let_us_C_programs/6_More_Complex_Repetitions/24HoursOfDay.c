#include <stdio.h>

void main()
{
    int time;
    printf("### Program to print Times of day with Proper Suffix ###\n\n");

    time = 00;

    while (time != 25)
    {

        if (time < 12 && time > 00)
        {
            printf("Time is %dAM\n", time);
        }
        else if (time > 12 && time < 24)
        {
            printf("Time is %dPM\n", time - 12);
        }
        else if (time == 12)
        {
            printf("Time is %dPM Noon\n", time);
        }
        else if (time == 24 || time == 00)
        {
            printf("Time is 12AM Midnight\n", time);
        }

        time++;
    }
}