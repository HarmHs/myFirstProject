#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int nb,cxk,count;

	printf("�����ʼ��������\n");
	scanf("%d", &nb);
	printf("������Ҫִ�еĴ�����\n");
	scanf("%d", &cxk);
	printf("   n  n cubed\n");
	for (count = 0; count < cxk; count++)
	{
		
		printf("%4d %4d\n",(nb+count), (nb + count) * (nb + count) * (nb + count));
	}
	return 0;
}

