// 01/22/2026

#include<stdio.h>

int main()
{
    int note[] = {100, 50, 20, 10, 5, 2, 1};
    int money, i, remaining, count;

    scanf("%d", &money);
    printf("%d\n", money);

    remaining = money;

    for(i = 0; i < sizeof(note) / sizeof(note[0]); i++)
    {
        count = remaining / note[i];
        remaining = remaining % note[i];

        printf("%d nota(s) de R$ %d,00\n", count, note[i]);
    }

    return 0;
}