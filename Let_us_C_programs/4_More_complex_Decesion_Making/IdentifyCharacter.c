#include<stdio.h>

int main()
{
    char charac;
    printf("### Program to identify entered character ###\n\n");

    printf("Enter the character: ");
    scanf("%c", &charac);

    if (charac>=65 && charac<=90)
    {
        printf("\n%c is a Uppercase character", charac);
    }
    else if (charac>=97 && charac<=122)
    {
        printf("\n%c is a Lowercase character", charac);
    }
    else if (charac>=48 && charac <= 57)
    {
        printf("\n%c is a Number", charac);
    }
    else if ((charac>=0 && charac<=47) || (charac>=58 && charac<=64) || (charac>=91 && charac<=96) || (charac>=123 && charac<=127))
    {
        printf("\n%c is a special character", charac);
    }

    return 0;
}