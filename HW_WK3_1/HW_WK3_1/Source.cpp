#include <stdio.h>

int main()
{
    int num, s, z;
    scanf("%d", &num);
    s = num - 1;
    z = 1;
    for (int y = 1; y <= num; y++) {
        for (int x = 1; x <= s; x++) {
            printf(" ");
        }
        for (int i = 1; i <= z; i++)
            printf("*");
        z = z + 2;
        s--;
        printf("\n");
    }



    return 0;
}
