#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define COVERAGE 350


int main(void)
{
	int feet;
	int cans;

	printf("输入有多少面积需要刷漆：\n");
	while (scanf("%d", &feet) == 1)
	{
		cans = feet / COVERAGE;
		cans += (feet % COVERAGE == 0) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans, (cans > 1) ? "cans" : "can");
		printf("Enter next number to analyse(q to quit):\n");
	}
	printf("Done!\n");
	return 0;
}