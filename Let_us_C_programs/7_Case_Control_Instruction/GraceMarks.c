#include<stdio.h>

void main()
{
    int class, failed_number, grace;
    char choice;
    printf("### Program to calculate Grace marks of Students ###\n\n");


    do
    {
        
    

    printf("Enter the class 1, 2 or 3: ");
    scanf("%d", &class);
    printf("Enter number of failed subjects: ");
    scanf("%d", &failed_number);

    switch (class)
    {
    case 1:
        {
        if(failed_number>3){
            grace = 0;
        }
        else if (failed_number<=3)
        {
            grace = 5*failed_number;
        }
        break;
        }

    case 2:
    {
        if(failed_number>2)
        {
            grace = 0;
        }
        else if (failed_number<=2)
        {
            grace = 4*failed_number;
        }
    }

    case 3:
    {
        if(failed_number>1)
        {
            grace = 0;
        }
        else if (failed_number<=1)
        {
            grace = 5;
        }
        break;
    }
    
    default:
        printf("\nInvalid Input");
        break;
    }

    printf("The grace marks are %d", grace);

    printf("\nDo you want to continue[y/n]?: ");
    fflush(stdin);
    scanf("%c", &choice);

    } 
    while (choice == 'Y' || choice == 'y');

    printf("\n\nExiting the Program");

}

