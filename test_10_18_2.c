#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define TIMES 1.5
#define RATE_300 0.15
#define RATE_450 0.20
#define RATE_OVER 0.25
void menu(void)
{
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr%*s2) $9.33/hr\n", 25, "");
	printf("3) $10.00/hr%*s4) $11.20/hr\n", 25, "");
	printf("5) quit\n");
}
void ask(void)
{
	printf("How many hours do you work per week\n");
}
double calculate_tax(double salary, double hours) {
	double sum_salary = salary * hours;
	double tax = 0.0;
	if (sum_salary <= 300) {
		tax = RATE_300 * sum_salary;
	}
	else if (sum_salary <= 450) {
		tax = 300 * RATE_300 + RATE_450 * (sum_salary - 300);
	}
	else {
		tax = 300 * RATE_300 + RATE_450 * 150 + RATE_OVER * (sum_salary - 450);
	}
	return tax;
}
int main(void)
{
	double salary = 0.0;
	float times = 0.0;
	float sum_salary;
	float tax;
	float netincome;
	float realtimes;
	menu();
	int choice;
	while (scanf("%d", &choice) == 1 && choice != 5)
	{
		switch (choice)
		{
		case 1:
		{
			salary = 8.75;
			break;
		}
		case 2:
		{
			salary = 9.33;
			break;
		}
		case 3:
		{
			salary = 10.00;
			break;
		}
		case 4:
		{
			salary = 11.20;
			break;
		}
		default :
		{
			printf("Please enter correct number!\n");
			continue;
		}
		}
		ask();
		if (scanf("%f", &times) != 1) {
			printf("Invalid input. Please enter a valid number of hours.\n");
			while (getchar() != '\n');  // Clear input buffer
			continue;
		}
		if (times <= 0)
		{
			printf("Please enter a positive integer!");
			continue;
		}
		realtimes = times;
		if (times >= 168)
		{
			printf("You stole time!\n");
			continue;
		}
		if (times > 40) {
			times += TIMES * (times - 40); // Overtime pay adjustment
			printf("You have worked %.2f overtime hours.\n", times - 40);
		}
		sum_salary = times * salary;
		tax = calculate_tax(salary, times);
		netincome = sum_salary - tax;
		printf("you working hours:%.2fh\n", realtimes);
		printf("sum_salary: %.2f$\n", sum_salary);
		printf("tax : %.2f$\n", tax);
		printf("netincome : %.2f$\n", netincome);
		menu();
		while (getchar() != '\n');
	}
	printf("Bye£¡\n");
	return 0;
}