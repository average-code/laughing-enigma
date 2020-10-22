#include <stdio.h>
#include <math.h>


int main()
{
    int number10, number8 = 0, temp, i = 1;
    printf("#### Program to convert Decimal to Octal ####\n\n");

    printf("Enter a decimal number: ");
    scanf("%d", &number10);
    temp = number10;

    while (temp != 0)
    {
        number8 = number8 + (temp % 8) * i;
        temp = temp/ 8;
        i = i*10;
    }

    printf("\n%d in octal is %d", number10, number8);

    return 0;
}