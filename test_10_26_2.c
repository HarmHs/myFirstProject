#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void to_base_n(unsigned int,unsigned int);
int main(void)
{
	unsigned int m = 9191;
	unsigned int b = 2;
	to_base_n(m, b);
	return 0;
}
void to_base_n(unsigned int a, unsigned int b)
{
	if (b < 2 || b > 10)
		return;
	unsigned int temp;
	temp = a;
	temp %= b;
	if (a >= b)
		to_base_n(a / b,b);
	printf("%u", temp);
}