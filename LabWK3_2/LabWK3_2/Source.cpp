#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y,sum;
	for (int x = 1; x <= 10000; x++) {
		y = 1;
		sum = 0;
		while (y<=x-1) {
			if (x % y == 0) {
				sum += y;
				++y;
			}
			else if (x % y != 0) {
				++y;
			}
		}
		if (sum == x) {
			printf("%d ",sum);
		}
	}
}