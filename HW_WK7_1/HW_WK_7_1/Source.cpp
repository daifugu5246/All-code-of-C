#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x, y;
	printf("Enter value of x : ");
	scanf("%d", &x);
	printf("Enter value of y : ");
	scanf("%d", &y);
	x = x + y; //sum
	y = x - y; //y = period x
	x = x - y; //x = period y
	printf("x : ");
	printf("%d ",x);
	printf("y : ");
	printf("%d",y);
	return 0;
}

