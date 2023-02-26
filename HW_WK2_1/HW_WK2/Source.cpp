#include<stdio.h>
int main()
{
	float bmi, h, w;
	printf("Enter your weight(kg): ");
	scanf_s("%f",&w);
	printf("Enter your height(m): ");
	scanf_s("%f",&h);
	bmi = w / (h * h);
	printf("Your BMI = %.1f \n",bmi);
	if (bmi < 18.5)
	{
		printf("You are underweight.");
	}
	else if (18.5 <= bmi <= 24.9)
	{
		printf("You are normal weight.");
	}
	else if (25.0 <= bmi <=29.9)
	{
		printf("You are overweight.");
	}
	else if (bmi>=30.0)
	{
		printf("You are obese.");
	}
	return 0;
}