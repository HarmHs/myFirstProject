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
	printf("请选择操作: [A]添加 [D]删除 [Q]退出\n");
	char choice = get_first(); 
	switch (toupper(choice)) {
	case 'A': printf("执行添加操作\n"); break;
	case 'D': printf("执行删除操作\n"); break;
	case 'Q': printf("程序退出\n"); break;
	default:  printf("无效输入\n");
	}
	return 0;
}