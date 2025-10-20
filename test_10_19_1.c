#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 100
int main(void)
{
	int low = 1;
	int high = 100;
	srand(time(0));
	int guess = rand() % 100 + 1;
	printf("Think of a number between 1-100. I'll guess it.\nEnter 'h'=too high, 'l'=too low, 'y'=correct,and 'q'= quit.\n");
	printf("I guess this number is:%d\n", guess);
	char response;
	while (1)
	{
		response = getchar();
		while (getchar() != '\n')
			;
		if (response == 'q')
		{
			
			break;
		}
		if (response == 'y')
		{
			printf("I knew I could accomplish it!\n");
			break;
		}
		else if (response == 'l')
		{
			low = guess + 1;

		}
		else if (response == 'h')
		{
			high = guess - 1;
		}
		else
		{
			printf("You should enter characters like 'l', 'h', or 'y'. I am currently unable to recognize other inputs.\n");
			continue;
		}
		if (low <= high)
		{
			guess = (high + low) / 2;
			printf("I guess this number is: %d\n", guess);
		}
		else
		{
			printf("There seems to be an issue with your responses. Please try again.\n");
			break;
		}
	}
	printf("Execution completed!\n");
	return 0;
}