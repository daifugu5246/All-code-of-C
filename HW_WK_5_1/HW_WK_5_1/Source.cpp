#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[10000][100];
    int row=0;
    FILE* fptr = fopen("C:/temp/data.txt", "w");
    if (fptr==NULL) {
        printf("File not found.");
        exit(1);
    }
    while (row <= 10000)
    {
        scanf("%s", string[row]);
        fprintf(fptr, "%s\n", string[row]);
        if (string[row][0] == '.' && string[row][1] == NULL)break;
        row++;
    }
    fclose(fptr);
    return 0;
}
