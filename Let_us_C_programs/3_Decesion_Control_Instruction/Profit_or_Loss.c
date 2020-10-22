#include <stdio.h>

int main()
{
    float cost_price, selling_price;
    printf("##### Program to find if Profit or Loss has been incurred #####\n\n");

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("\nEnter the selling price: ");
    scanf("%f", &selling_price);

    if ((cost_price - selling_price) > 0)
    {
        printf("\nIt was a profit of %.2f units!", (cost_price - selling_price));
    }
    else if ((selling_price - cost_price) > 0)
    {
        printf("\nIt was a loss of %.2f units!", (selling_price - cost_price));
    }
    else
    {
        printf("\nThere was no profit or loss incurred");
    }

    return 0;
}