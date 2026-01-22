// 01-15-2026

#include<stdio.h>

int main()
{
    double pi = 3.14159;
    double A, R;

    scanf("%lf", &R);
    
    A = (pi * R * R);
    
    printf("A=%.4lf\n", A);

    return 0;
}