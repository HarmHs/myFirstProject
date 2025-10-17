#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	int count_1, count_2;
	count_1 = count_2 = 0;
	int sum = 0;
	while (scanf("%c", &ch) == 1)
	{
		if (ch == '#')
			break;
		else if (ch == '!')
		{
			printf("!!");
			count_1++;
			continue;
		}

		else if (ch == '.')
		{
           ch = '!';
		
		   putchar(ch);
		   count_2++;
		
		   continue;
		}
		printf("%c", ch);
	}
	sum = count_2 + count_1;
	printf("Ìæ»»'¡£'£º%d\nÌæ»»'!':%d\n×Ü¹²Ìæ»»£º%d",count_2,count_1,sum);
	return 0;
}