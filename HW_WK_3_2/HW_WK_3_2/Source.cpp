#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int num, x, y, z ,star_x,star_y;
    scanf("%d", &num);
    x = 1;
    y = num - 1;
    star_x = num - 1;
    while (x <= num) {
        star_y = 1;
        z = 1;
        while (z <= y) {
            printf(" ");
            z++;
        }
        while (star_y <= num - star_x) {
            printf("*");
            star_y++;
        }
        x++;
        star_x = star_x - 2;
        y--;
        printf("\n");
    }





    return 0;
}
