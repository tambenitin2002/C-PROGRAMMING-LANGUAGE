#include <stdio.h>
int main()
{
    char id[19];
    int hour;
    double value, salary;
    printf("Enter the employees id (max.10 chars): ");
    scanf("%s", &id);
    printf("\nInput the working hrs:");
    scanf("%d", &hour);
    printf("\nsalary amount/hr :");
    scanf("%lf", &value);
    salary = value * hour;
    printf("\nEmployees ID =%s\n salary = u$ %.2lf\n", id, salary);
    return 0;
}