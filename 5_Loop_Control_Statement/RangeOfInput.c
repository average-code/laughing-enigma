#include <stdio.h>

void main()
{
    int lowest, highest, number;
    char choice = 'Y';
    lowest = highest = number = 0;    
    printf("### Program to find range of a set ###\n\n");

    while(choice == 'y' || choice == 'Y')
    {
        if(choice == 'Y' || choice=='y')
        {
        printf("Enter the number: ");
        scanf("%d", &number);
        }

        else
        {
            printf("\nInvalid Input");
        }

        if (number>= highest)
        {
            highest = number;
        }
        else if (number<= lowest)
        {
            lowest = number;
        }
        
        printf("\nContinue [y/n]: ");
        fflush(stdin);
        scanf("%c", &choice);
    }

    printf("\n%d lowest value\n%d highest value\nRange is: %d", lowest, highest, (highest-lowest));
    printf("\n\nThank You");
}