#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
char get_first(void)
{
	int ch = 0;
	while((ch = getchar())!= EOF && isspace(ch))
	  ;
	while (getchar() != '\n' && ch != EOF)
	{
		ch = getchar();
		continue;
	}
	return (char)ch;
}
int main(void)
{
	printf("��ѡ�����: [A]��� [D]ɾ�� [Q]�˳�\n");
	char choice = get_first(); 
	switch (toupper(choice)) {
	case 'A': printf("ִ����Ӳ���\n"); break;
	case 'D': printf("ִ��ɾ������\n"); break;
	case 'Q': printf("�����˳�\n"); break;
	default:  printf("��Ч����\n");
	}
	return 0;
}