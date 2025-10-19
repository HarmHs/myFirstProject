#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int prime(int a)
{
	int i;
	if (a < 2)
		return 0;
	for (i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int prime_total[1000] = {0};
	int num;
	printf("Please enter a positive integer,");
	printf("and then I will find all prime numbers less than or equal to that number(enter 0 to quit):\n");
	while (1)
	{
		if (scanf("%d", &num) != 1 || num == 0)
			break;
		if (num < 0)
		{
			printf("This is not a positive integer. Please re-enter:\n");
			continue;
		}
		int count = 0;
		for (int i = 1; i <= num; i++)
		{
			if (prime(i))
				prime_total[count++] = i;
		}
		// 数组越界保护
		if (count >= 1000) {
			printf("Warning: Prime number buffer full\n");
			break;
		}
		printf("These are all prime numbers that are less than or equal to this number:\n");
		for (int j = 0; j < count; j++)
		{
			printf("%d ", prime_total[j]);
		}
	}
	printf("Operation completed, goodbye!\n");
	return 0;
}