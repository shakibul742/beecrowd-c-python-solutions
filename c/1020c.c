// 01/26/2026

#include<stdio.h>

int main()
{
    int n, year, month, day, remaining = 0;

    scanf("%d", &n);

    year = n / 365;
    remaining = n % 365;
    month = remaining / 30;
    day = remaining % 30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);

    return 0;
}