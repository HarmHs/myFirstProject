#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add%*ss. subtract\n", 15, "");
	printf("m. multiply%*sd. divide\n", 10, "");
	printf("q. quit\n");
}
static void flush_line(void) {
	int c;
	while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }
}

void ask(float*i, float*j)
{
	char input[100];
	char input2[100];
	int result1, result2;
	result1 = result2 = 1;
	printf("Enter the first number:");
	if (fgets(input, sizeof(input), stdin) != NULL) {
		result1 = sscanf(input, "%f", i);
		if (result1 != 1) {
			printf(" ‰»Î¥ÌŒÛ£∫");
			for (int k = 0; input[k] != '\0'; k++) {
				if (isgraph(input[k])) {
					putchar(input[k]);
				}
			}
			printf("\n");
		}
	}
	printf("Enter the second number:");
	if (fgets(input2, sizeof(input2), stdin) != NULL) {
		result2 = sscanf(input2, "%f", j);
		if (result2 != 1) {
			printf(" ‰»Î¥ÌŒÛ£∫");
			for (int l = 0; input2[l] != '\0'; l++) {
				if (isgraph(input2[l])) {
					putchar(input2[l]);
				}
			}
			printf("\n");
		}
	}
}
int main(void)
{
	while (1)
	{
		int response;
		float first_number = 0.0;
		float second_number = 0.0;
		float calculation_result = 0.0;
		menu();
		if ((response = getchar()) == EOF)
		{
			printf("Bye.\n");
			break;
		}
		flush_line();
		if (response == 'a')
		{
			ask(&first_number, &second_number);
			calculation_result = first_number + second_number;
			printf("%f + %f = %.6g\n", first_number, second_number, calculation_result);
			continue;
		}
		if (response == 's')
		{
			ask(&first_number, &second_number);
			calculation_result = first_number - second_number;
			printf("%f - %f = %.6g\n", first_number, second_number, calculation_result);
			continue;
		}
		if (response == 'm')
		{
			ask(&first_number, &second_number);
			calculation_result = first_number * second_number;
			printf("%f * %f = %.6g\n", first_number, second_number, calculation_result);
			continue;
		}
		if (response == 'd')
		{
			ask(&first_number, &second_number);
			if (fabsf(second_number) < 1e-7f)
			{
				printf("Zero cannot be used as a divisor");
				continue;
			}
			calculation_result = first_number / second_number;
			printf("%f / %f = %.6g\n", first_number, second_number, calculation_result);
			continue;
		}
		if (response == 'q')
		{
			printf("Bye.\n");
			break;
		}
		printf("Invalid input!\n");
	} 
	 return 0;
}