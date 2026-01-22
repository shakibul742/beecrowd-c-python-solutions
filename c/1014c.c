// 01/19/2026

#include<stdio.h>

int main()
{
    int X;
    double Y, Consumption;

    scanf("%d %lf", &X, &Y);

    Consumption = X / Y;

    printf("%.3lf km/l\n", Consumption);

    return 0;
}