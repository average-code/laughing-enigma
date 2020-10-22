#include <stdio.h>
int main()
{
    float temprature;
    printf("Enter temprature in Fahrenheit: ");
    scanf("%f", &temprature);
    temprature = (temprature - 32) * 5 / 9;
    printf("\nTemprature in Celcius is: %f", temprature);
    return 0;
}