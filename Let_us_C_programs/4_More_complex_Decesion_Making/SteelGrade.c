#include<stdio.h>

int main()
{
    int h, t;
    float c;
    printf("### Program to find Grade of Steel ###\n\n");

    printf("Enter the value of Hardness: ");
    scanf("%d", &h);
    printf("\nEnter the value of Carbon Content: ");
    scanf("%f", &c);
    printf("\nEnter the value of Tensile Strength: ");
    scanf("%d", &t);

    if(h>50 && c<0.7 && t>5600)
    {
        printf("\nThe Steel is Grade 10");
    }
    else if(h>50 && c<0.7 && t<5600)
    {
        printf("\nThe Steel is Grade 9");
    }
    else if(h<50 && c<0.7 && t>5600)
    {
        printf("\nThe Steel is Grade 8");
    }
    else if(h>50 || c>0.7 || t>5600)
    {
        printf("\nThe Steel is Grade 7");
    }
    else if(h>50 || c>0.7 || t>5600)
    {
        printf("\nThe Steel is Grade 6");
    }
    else if (h<50 && c>0.7 && t<5600)
    {
        printf("\nThe Steel is Grade 5");
    }

    return 0;

}


