#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<float.h>
#include<math.h>
double harmonic_mean(double, double);
int main(void)
{
	double a = 0.0;
	double b = 0.0;
	double result = 0.0;
	while (1)
	{
		printf("Input two non-zero decimal numbers(q to quit):\n");
		if (scanf(" %lf %lf", &a, &b) != 2)
		{
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF)
				;
			break;
		}
		result = harmonic_mean(a, b);
	    if (isnan(result))
		    printf("Invalid input\n");
	    else
	    {
		  printf("The harmonic mean is:%.6f (Precision to six decimal places)", result);
		  printf("\n");
	    }
	}
	return 0;
}
double harmonic_mean(double a, double b)
{
	if (a == 0.0 || b == 0.0 || fabs(a + b) < DBL_EPSILON)
		return NAN;
	return ( ( 2 * ( a * b ) ) / ( a + b ));
}