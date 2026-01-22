// 01-16-2026

#include<stdio.h>

int main()
{
    char seller_name[100];
    double fixed_salary, total_sale_amount, bonus_salary, total_salary;

    scanf("%s", seller_name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sale_amount);

    bonus_salary = total_sale_amount * 0.15;
    total_salary = fixed_salary + bonus_salary;

    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
    

}