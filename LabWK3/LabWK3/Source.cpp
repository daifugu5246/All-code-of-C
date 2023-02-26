#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num,sum;

	scanf("%d",&num);
	printf("%d", num);
	while (num > 10) {
		sum = 0;
		while (num > 0) {
			sum = sum + (num % 10);
			num = num / 10;
		}
		printf("->");
		printf("%d", sum);
		num = sum;
	}
	return 0;
}


