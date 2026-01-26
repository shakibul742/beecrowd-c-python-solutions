// 01/26/2026

#include<stdio.h>

int main()
{
    double num, remaining;
    int result, i, note[100] = {100, 50, 20, 10, 5, 2};

    scanf("%lf", &num);

    for(i = 0; i < sizeof(note); i++)
    {
        result = num / note[i];
        remaining = num % note[i];
    }

    for(i = 0; i < sizeof(note); i++)
    {
        printf("%d nota(s) de R$ %d.00", result, note[i]);
    }
}