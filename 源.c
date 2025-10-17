#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>

int main(void)
{
	/*char ch;
	while ((ch = getchar())!= '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);*/

	printf("输入一个正整数：\n");
	int num;
	int div;
	bool isPrime;
	while (((scanf("%d",&num)==1)&&( num > 0)))
	{
		for (div = 2,isPrime = true; div * div <= num; div++)
			if (num % div == 0)
			{
				if (div * div != num)
				{
					printf("%d is divisible by %d and %d.\n", num, div, num / div);

				}
				else
					printf("%d is divisible by %d.\n", num, div);
				isPrime = false;
			}
		if (isPrime)
			printf("%lu is prime.\n", num);
		printf("Please enter next integer.\n");
		printf("Enter q to quit.");

	
	}
	printf("Done");
	return 0;
}