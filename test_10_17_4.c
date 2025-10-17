#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");  // 让宽字符 I/O 按系统区域设置工作（UTF-8 常见）
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
		case L'!':            // 半角
			wprintf(L"!!");   // 或 putwchar(L'!'); putwchar(L'!');
			count_1++;
			break;
		case L'！':           // 全角
			wprintf(L"！！");
			count_1++;
			break;
		case L'.':            // 英文句号
			putwchar(L'!');
			count_dot++;
			break; 
		case L'。':           // 中文句号
			putwchar(L'！');  // 或改成 L'!' 看你需求
			count_dot++;
			break;
		default :
			putwchar(ch);
		}
		
    }
quit:
	wprintf(L"\n替换'。/.'：%d\n替换'!（含全/半角）': %d\n总共替换：%d\n",
		count_dot, count_1, count_1 + count_dot);
	return 0;
}