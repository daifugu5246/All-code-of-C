#include <stdio.h>
int main()
{
	int num1, num2, x, GCD = 1;
	printf("Enter first number : ");
	scanf_s("%d", &num1);
	printf("Enter second number : ");
	scanf_s("%d", &num2);
	x = 2;
	while (x <= num1 && x <= num2)
	{
		while (num1 % x == 0 && num2 % x == 0)
		{
			num1 /= x;
			num2 /= x;
			GCD *= x;
		}
		++x;
	}
	if (GCD == 1)
	{
		printf("No greatest common divisor detected.");
	}
	else
	{
		printf("Greatest common divisor : %d", GCD);
	}
	return 0;
}
