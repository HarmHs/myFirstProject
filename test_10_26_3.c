#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
unsigned long Fibonacci(unsigned int);
int main(void)
{
	unsigned long a;
	scanf("%lu", &a);
	printf("%lu", Fibonacci(a));
	return 0;
}
unsigned long Fibonacci(unsigned int a)
{
	unsigned long result; 
	unsigned long prev1,prev2;
	prev1 = 0;
	prev2 = 1;
	if (a == 0)
		return 0;
	if (a == 1)
		return 1;
	for (int i = 2; i <= a; i++) {
		result = prev1 + prev2;
		prev1 = prev2;
		prev2 = result;
	}
	return result;
}