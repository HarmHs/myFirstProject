#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number = 0;
	int result;
	while (1)
	{
		printf("Enter an integer (q to quit):\n");
		result = scanf("%lu", &number);
		if (result != 1)
			break;
		int ch;
		int valid = 1;
		while ((ch = getchar()) != '\n' && ch != EOF)
		{
			if ((ch < '0' && ch != '\n'))
				valid = 0;  
		}
		if (!valid)
			break;
		printf("Binary representation: ");
		to_binary(number);
		putchar('\n');
		while (getchar() != '\n')
			;
	}
	printf("Done.\n");
	return 0;
}
void to_binary(unsigned long n)
{
	int i;
	i = n % 2;
	if (n >= 2)
	{
		to_binary(n / 2);
	}
	putchar(i == 0 ? '0' : '1');
}
