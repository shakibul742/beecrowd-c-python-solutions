// 01/18/2026

#include<stdio.h>

int main()
{
    double A, B, C, triangle_area, circle_area, trapezium_area, square_area, rectangle_area, pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle_area = (A * C) / 2;
    circle_area = pi * C * C;
    trapezium_area = ((A + B) * C) / 2;
    square_area = B * B;
    rectangle_area = A * B;

    printf("TRIANGULO: %.3lf\n", triangle_area);
    printf("CIRCULO: %.3lf\n", circle_area);
    printf("TRAPEZIO: %.3lf\n", trapezium_area);
    printf("QUADRADO: %.3lf\n", square_area);
    printf("RETANGULO: %.3lf\n", rectangle_area);



    return 0;
}