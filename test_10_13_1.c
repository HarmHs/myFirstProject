#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <ctype.h>
#include <stdbool.h>
//ͳ���ַ�����������������
int main(void)
{
	printf("�����ı��Է���������|����ֹ����\n");
	char ch;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	prev = '\n';
	bool inword = false;
	while ((ch = getchar()) != '|')
	{
		n_chars++;
		if (ch == '\n')
			n_lines++;
		if (!isspace(ch) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(ch) && inword)
			inword = false;
		prev = ch;
	}
	if (prev != '\n')
		p_lines = 1;
	printf("characters = %ld, words = %d,lines = %d,", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	return 0;
}