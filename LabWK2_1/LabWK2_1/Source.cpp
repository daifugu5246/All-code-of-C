#include <stdio.h>
int main()
{
	int n, x;
	printf("Enter number : ");
	scanf_s("%d", &n);
	printf("Factoring result : ");
	x = 2;
	while (x <= n)
	{
		while (n % x == 0)
		{
			printf(" %d ", x);
			n /= x;
		}
		++x;
	}
	return 0;
}
