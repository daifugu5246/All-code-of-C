#include <stdio.h>
int main()
{
	int n, x, y;
	printf("Enter number : ");
	scanf_s("%d", &n);
	x = 1;
	while (x <= n)
	{
		printf("*");
		++x;
	}
	printf("\n");
	x = 1;
	while (x <= n - 2)
	{
		y = 1;
		printf("*");
		while (y <= n - 2)
		{
			printf(" ");
			++y;
		}
		printf("*\n");
		++x;
	}
	x = 1;
	while (x <= n)
	{
		printf("*");
		++x;
	}
	return 0;
}
