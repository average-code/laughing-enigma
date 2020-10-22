#include <stdio.h>

int main()
{
    int salary;

    printf("Enter Your Salary: ");
    scanf("%d", &salary);
    salary = salary * 1.6;
    printf("The salary after allowance is: %d", salary);
    return 0;
}
