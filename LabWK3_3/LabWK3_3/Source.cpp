#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, x = 1, spctop, spcbot;
    scanf("%d",&n);
    spctop = 3 * (n - 2);
    for (int l = 1; l <= n - 1; l++) {
        for (int i = 1; i <= x; i++)
            printf("* ");
        for (int j = 1; j <= n + spctop; j++)
            printf(" ");
        for (int i = 1; i <= x; i++) {
            printf("* ");
        }
        printf("\n");
        x++;
        spctop -= 4;
    }
    x = n - 1;
    spcbot = 2;
    for (int i = 1; i <= n + (n - 1); i++)
        printf("* ");
    printf("\n");
    for (int l = 1; l <= n - 1; l++) {
        for (int i = 1; i <= x; i++)
            printf("* ");
        for (int j = 1; j <= spcbot; j++)
            printf(" ");
        for (int i = 1; i <= x; i++) {
            printf("* ");
        }
        printf("\n");
        x--;
        spcbot += 4;
    }
    return 0;
}
