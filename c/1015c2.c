// 01/18/2026

#include<stdio.h>
#include<math.h>

int main()
{
    double x1, x2, y1, y2, distance;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distance = hypot(x2 - x1, y2 - y1);

    printf("%.4lf\n", distance);

    return 0;
}

// Run command: gcc 1015c2.c -o 1015c2 -lm
// ./1015c2