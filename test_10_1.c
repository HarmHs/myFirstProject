#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int nb,cxk,count;

	printf("输入初始正整数：\n");
	scanf("%d", &nb);
	printf("输入想要执行的次数：\n");
	scanf("%d", &cxk);
	printf("   n  n cubed\n");
	for (count = 0; count < cxk; count++)
	{
		
		printf("%4d %4d\n",(nb+count), (nb + count) * (nb + count) * (nb + count));
	}
	return 0;
}

