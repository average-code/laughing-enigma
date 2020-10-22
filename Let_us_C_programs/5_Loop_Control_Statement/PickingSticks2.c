#include <stdio.h>
int pickSticks(int, int);
void main()
{
    int sticks, total = 21;
    char choice;
    printf("\n####==== The Stick Game ====####\n\n");
    printf("The rules are as follows:");
    printf("\n-There are 21 matchsticks.");
    printf("\n-The computer asks the user to pick 1, 2, 3, or 4 matchsticks.");
    printf("\n-After the person picks, the computer does the picking.");
    printf("\n-Whoever is forced to pick the last matchstick loses.\n");

    printf("Should we start the game? [Y/N]?: ");
    scanf("%c", &choice);
    if (choice == 'Y' || choice == 'y')
    {
        while (choice == 'Y' || choice == 'y')
        {

            printf("\nLets start the game!\n");
            printf("\nSelect number of sticks to pick: ");
            scanf("%d", &sticks);

            while (total > 1)
            {
                // if ((sticks == 1) || (sticks == 2) || (sticks == 3) || (sticks == 4))
                // {
                //     total = total - sticks;
                //     if (total % 5 == 4)
                //     {
                //         printf("I choose 3 sticks");
                //         total = total - 3;
                //         printf("\nNumber of sticks is %d\n", total);
                //         printf("Your Turn: ");
                //         scanf("%d", &sticks);
                //     }
                //     else if (total % 5 == 3)
                //     {
                //         printf("I choose 2 sticks");
                //         total = total - 2;
                //         printf("\nNumber of sticks is %d\n", total);
                //         printf("Your Turn: ");
                //         scanf("%d", &sticks);
                //     }
                //     else if (total % 5 == 2)
                //     {
                //         printf("I choose 1 sticks");
                //         total = total - 1;
                //         printf("\nNumber of sticks is %d\n", total);
                //         printf("Your Turn: ");
                //         scanf("%d", &sticks);
                //     }
                //     else if (total % 5 == 1)
                //     {
                //         printf("I choose 4 sticks");
                //         total = total - 4;
                //         printf("\nNumber of sticks is %d\n", total);
                //         printf("Your Turn: ");
                //         scanf("%d", &sticks);
                //     }
                //     else if (total % 5 == 0)
                //     {
                //         printf("I choose 4 sticks");
                //         total = total - 4;
                //         printf("\nNumber of sticks is %d\n", total);
                //         printf("Your Turn: ");
                //         scanf("%d", &sticks);
                //     }
                //     else
                //     {
                //         printf("Invalid Input! Enter a value between 1 and 4");
                //         scanf("%d", &sticks);
                //         continue;
                //     }
                // }

                pickSticks(sticks, total);
            }


            printf("\nNumber of sticks is %d\n", total);
            printf("\nI WIN!\n\nYou are a loser!");
            printf("\n\nDo you want to play again [Y/N]? : ");
            fflush(stdin);
            scanf("%c", &choice);
            printf("\n");
        }
    }
    else
    {
        printf("\n\nThank You\n\n");
    }
}



int pickSticks(int sticks, int total);

{
    int total;
    if ((sticks == 1) || (sticks == 2) || (sticks == 3) || (sticks == 4))
    {
        total = total - sticks;
        if (total % 5 != 0)
        {
            printf("I choose %d sticks", (total % 5 - 1));
            total = total - (total % 5 - 1);
            printf("\nNumber of sticks is %d\n", total);
            printf("Your Turn: ");
            scanf("%d", &sticks);
        }
    }
}