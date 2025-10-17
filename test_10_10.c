#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	//Êä³ö99³Ë·¨±í
	int i, j;
	int result;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d * %d = %-2d ",j,i,result);
		}
		printf("\n");
	}
}


