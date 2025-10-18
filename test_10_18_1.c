#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define SALARY 10.0
#define TIMES 1.5
#define RATE_300 0.15
#define RATE_450 0.20
#define RATE_OVER 0.25
int main(void)
{
	float times;
	float sum_salary;
	float tax;
	float netincome;
	float realtimes;
	printf("输入一周工作的小时数：\n");
	while (scanf("%f", &times) == 1)
	{
		realtimes = times;
		if (times <= 0)
			break;
		if (times >= 168)
		{
			printf("你偷取了时间！\n");
			break;
		}
		if (times < 40)
		{
			sum_salary = SALARY * times;
			if (sum_salary <= 300)
			{
				tax = RATE_300 * sum_salary;
				netincome = sum_salary - tax;
			}
			else if (sum_salary <= 450)
			{
				tax = 300 * RATE_300 + RATE_450 * (sum_salary - 300);
				netincome = sum_salary - tax;
			}
			else
			{
				tax = 300 * RATE_300 + RATE_450 * 150 + RATE_OVER * (sum_salary - 450);
				netincome = sum_salary - tax;
			}
		}
		else
		{
			times += TIMES * (times - 40);
			sum_salary = SALARY * times;
			if (sum_salary <= 450)
			{
				tax = 300 * RATE_300 + RATE_450 * (sum_salary - 300);
				netincome = sum_salary - tax;
			}
			else
			{
				tax = 300 * RATE_300 + RATE_450 * 150 + RATE_OVER * (sum_salary - 450);
				netincome = sum_salary - tax;
			}

		}
		printf("you working hours:%f\n sum_salary:%f\n tax:%f\n netincome:%f\n", realtimes, sum_salary, tax, netincome);
		printf("请继续输入(q to quit)：\n");
	}

	return 0;
}