#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int nch = 0;
	int prev = 0;

	int num = 0;
	while (((nch = getchar()) != '#') && ( nch !=EOF))
	{
		if (nch == 'e' && prev == 'i')
			num++;
		prev = nch;
	
	}
	printf("'ei'出现的次数%d\n", num);
	return 0;
}