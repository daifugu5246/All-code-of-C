#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len,i=0,x=1;

	printf("Enter the string : ");
	scanf("%s",str);
	len = strlen(str);
	while(i<=len-1)
	{
		while (i <= len - x)
		{
			printf("%c", str[i]);
			i++;
		}
		x++;
		printf("\n");
		i = 0;
		if (len - x < 0)break;
	}
	return 0;
}