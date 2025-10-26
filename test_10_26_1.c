#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<float.h>
double power(double, int);
int main(void)
{
	double a;
	int b;
	char ch;
	double result;
	while (1)
	{
		int return_value;
		printf("Please enter a floating-point number and an integer in sequence.\n");
		printf("I will calculate the power of this floating - point number.\n");
		printf("Input non-numeric characters to quit:\n");
		return_value = scanf("%lf %d",&a, &b);
		if (return_value != 2) {
			while ((ch = getchar()) != '\n' && ch != EOF);
			break;
		}
		result = power(a, b);
		if (isnan(result)) {
			printf("Result is NaN (invalid operation).\n");
			continue;
		}
		if (isinf(result)) {
			printf("Result is infinite (overflow).\n");
			continue;
		}
		printf("The power of %.5g to the %d power is %.5g\n", a, b, result);
		while ((ch = getchar()) != '\n' && ch != EOF);
	}
	printf("Program ended.\n");
	return 0;
}
double power(double a, int b)
{
	if (a == 0.0)
	{
		if (b > 0)
			return 0.0;
		if (b == 0)
		{
			printf("The power of 0 to the power of 0 is undefined; treated as 1.\n");
			return 1.0;
		}
		printf("The negative power of 0 is meaningless.\n");
		return NAN;
	}
	if (b == 0)
		return 1.0;
	if (b < 0)
	{
		b = -b;
		a = 1.0 / a;
	}
	double result = 1.0;
	for (int i = 0; i < b; i++) {
		if (fabs(result) > DBL_MAX / fabs(a)) {
			printf("Overflow occurred.\n");
			return HUGE_VAL;
		}
		result *= a;
	}
	return result;
}