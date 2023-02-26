#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int index;
	scanf("%s", string);
	index = strlen(string)-1;
	while (index >= 0)
	{
		printf("%c",string[index]);
		index--;
	}
	return 0;
}