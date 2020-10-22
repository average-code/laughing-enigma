#include<stdio.h>

void main()
{
    int ram, shyam, ajay;
    printf("### Program to find the youngest of the Three ###\n\n");

    printf("Enter ages of Ram, Shyam, and Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if (ram > ajay && shyam > ajay )
    {
        printf("\nAjay is the youngest");
    }
    else if (ajay > ram && shyam> ram)
    {
        printf("\nRam is the youngest");
    }
    else if (ajay>shyam && ram>shyam)
    {
        printf("\nShyam is the youngest");
    }
    
}