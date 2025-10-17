#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	//±‡≥Ã¡∑œ∞1
	char ch;
	printf("Enter some characters,and i will tell you the blank,lines,and the numbers of characters.\n");
	int lines,blanks ,num;
	lines = blanks = num = 0;
	printf("Enter '#' to quit.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			lines++;
		else if(isblank(ch))
			blanks++;
		else if (isgraph(ch))
			num++;
	}
	printf("\nStatistics:\n");
	printf("Blank spaces: %d\n", blanks);
	printf("Lines: %d\n", lines);
	printf("Visible characters: %d\n", num);
	//±‡≥Ã¡∑œ∞2
	char ch;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;

		i++;
		printf("%c : %-3d", ch, ch);
		if (i % 8 == 0)
			printf("\n");
	}
	if (i % 8 != 0)
		printf("\n");
	

	
	


	return 0;
}