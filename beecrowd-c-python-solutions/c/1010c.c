// 01/18/2026

#include<stdio.h>

int main()
{
    int product_1, unit_1, product_2, unit_2;
    float price1, price2, value;

    scanf("%d %d %f", &product_1, &unit_1, &price1);
    scanf("%d %d %f", &product_2, &unit_2, &price2);

    value = (unit_1 * price1) + (unit_2 * price2);

    printf("VALOR A PAGAR: R$ %.2f\n", value);

    return 0;
}