// 01/22/2026

#include<stdio.h>

int main()
{
    int money, remaining;
    int note100, note50, note20, note10, note5, note2, note1;

    scanf("%d", &money);
    printf("%d\n", money);

    remaining = money;

    note100 = remaining / 100;
    remaining = remaining % 100;

    note50 = remaining / 50;
    remaining = remaining % 50;

    note20 = remaining / 20;
    remaining = remaining % 20;

    note10 = remaining / 10;
    remaining = remaining % 10;

    note5 = remaining / 5;
    remaining = remaining % 5;

    note2 = remaining / 2;
    remaining = remaining % 2;

    note1 = remaining / 1;

    
    printf("%d nota(s) de R$ 100,00\n", note100);
    printf("%d nota(s) de R$ 50,00\n", note50);
    printf("%d nota(s) de R$ 20,00\n", note20);
    printf("%d nota(s) de R$ 10,00\n", note10);
    printf("%d nota(s) de R$ 5,00\n", note5);
    printf("%d nota(s) de R$ 2,00\n", note2);
    printf("%d nota(s) de R$ 1,00\n", note1);

    return 0;
}