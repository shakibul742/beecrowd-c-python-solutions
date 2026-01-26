// 01/26/2026

#include<stdio.h>

int main()
{
    int N, remaining_seconds, H, M, S;

    scanf("%d", &N);

    H = N / 3600;
    remaining_seconds = N % 3600;
    M = remaining_seconds / 60;
    S = remaining_seconds % 60;

    printf("%d:%d:%d\n", H, M, S);

    return 0;
}