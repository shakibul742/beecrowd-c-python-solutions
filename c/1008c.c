// 01-16-2026

#include<stdio.h>

int main()
{
    int employee_number, amout_per_hour;
    float worked_hour, salary;

    scanf("%d", &employee_number);
    scanf("%d", &amout_per_hour);
    scanf("%f", &worked_hour);

    salary = amout_per_hour * worked_hour;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}