#include <stdio.h>

void main()
{
    int positive, negative, zero;
    float number;
    char choice = 'Y';
    positive = negative = zero = 0;
    printf("### Program to count Positive, Negative and Zero in input ###\n\n");

    while(choice == 'y' || choice == 'Y')
    {
        if(choice == 'Y' || choice=='y')
        printf("Enter the number: ");
        scanf("%d", &number);

        if (number>0)
        {
            positive++;
        }
        else if (number<0)
        {
            negative--;
        }
        else if (number == 0)
        {
            zero++;
        }
        else
        {
            printf("\nInvalid Input");
        }
        
        printf("\nContinue [y/n]: ");
        fflush(stdin);
        scanf("%c", &choice);
    }

    printf("\n%d entries were positive\n%d entries were negative\n%d entries were zero", positive, negative, zero);
    printf("\nThank You");

}