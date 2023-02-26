#include<stdio.h>
float BMI(float W, float H)
{
	return W / (H * H);
}
int main()
{
	float w, h;
	printf("Enter youe weight(kg): ");
	scanf_s("%f", &w);
	printf("Enter youe height(m): ");
	scanf_s("%f", &h);
	printf("Your BMI % .1f \n", BMI(w, h));
	if (BMI(w, h) <18.4) {
		printf("You are underweight.");
	}
	else if (18.5<= BMI(w, h) <=24.9) {
		printf("You are normal weight.");
	}
	else if ( 25.0<= BMI(w, h) <=29.9) {
		printf("You are overweight.");
	}
	else if (BMI(w, h) >=30) {
		printf("You are obese.");
	}
	return 0;
}