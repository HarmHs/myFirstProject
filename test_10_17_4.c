#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");  // �ÿ��ַ� I/O ��ϵͳ�������ù�����UTF-8 ������
	wint_t ch;
	int count_1,count_dot,sumex;
	count_1 = count_dot =sumex =0;
	int sum = 0;
	while ((ch = getwchar()) != WEOF)
	{
		switch (ch)
		{
		case L'#':
			goto quit;
		case L'!':            // ���
			wprintf(L"!!");   // �� putwchar(L'!'); putwchar(L'!');
			count_1++;
			break;
		case L'��':           // ȫ��
			wprintf(L"����");
			count_1++;
			break;
		case L'.':            // Ӣ�ľ��
			putwchar(L'!');
			count_dot++;
			break; 
		case L'��':           // ���ľ��
			putwchar(L'��');  // ��ĳ� L'!' ��������
			count_dot++;
			break;
		default :
			putwchar(ch);
		}
		
    }
quit:
	wprintf(L"\n�滻'��/.'��%d\n�滻'!����ȫ/��ǣ�': %d\n�ܹ��滻��%d\n",
		count_dot, count_1, count_1 + count_dot);
	return 0;
}