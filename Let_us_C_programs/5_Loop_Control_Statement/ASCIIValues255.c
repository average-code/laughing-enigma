#include<stdio.h>

void main()
{
    long int i= 0;
    printf("### Program to print all ASCII values ###\n\n");

    printf("The characters for the respective ASCII values are as follows:\n");
    while (i < 256)
    {   
        if(i%7==0) printf("\n");

        printf("%d = %c\t", i, i);
        i++;
    }
}