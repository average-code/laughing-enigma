#include<stdio.h>

int main()
{
    float weight, height, bmi;
    printf("### Program to calculate Body Mass Index ###\n\n");

    printf("Enter your Height and Weight: ");
    scanf("%f %f", &height, &weight);

    bmi = weight/ (height*height);

    if(bmi>0 && bmi<=15)
    {
        printf("\nYou are starving :(\nTake care of yourself");
    }
    else if(bmi>15 && bmi<=17.5)
    {
        printf("\nYou are Anorexic :(\nTake care of yourself");
    }
    else if(bmi>17.5 && bmi<=18.5)
    {
        printf("\nYou are Underweight");
    }
    else if(bmi>18.5 && bmi<=24.9)
    {
        printf("\nYou are Ideal");
    }
    else if(bmi>25 && bmi<=25.9)
    {
        printf("\nYou are Overweight");
    }
    else if(bmi>30 && bmi<=30.9)
    {
        printf("\nYou are Obese");
    }
    else if(bmi>40)
    {
        printf("\nYou are morbidly obese :(\nTake care of yourself");
    }
    
    return 0;
}