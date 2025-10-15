#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<ctype.h>
//animals

int main(void)
{
	char ch;
	printf("输入一个小写字母，");
	printf("然后我会输出一个动物名\n以那个字母为首。\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower((unsigned char)ch))
			switch (ch)
			{
			case 'a':
				printf("Ant（蚂蚁）,Alligator（短吻鳄）\n");
				break;
			case 'b':
				printf("Bear（熊）,Bird（鸟）\n");
				break;
			case 'c':
				printf("Cat（猫）,Cow（牛）\n");
				break;
			case 'd':
				printf("Dog（狗）,Deer（鹿）\n");
				break;
			case 'e':
				printf("Elephant（大象）,Eagle（鹰）\n");
				break;
			case 'f':
				printf("Fox（狐狸）,Fish（鱼）\n");
				break;
			case 'g':
				printf("Goat（山羊）,Giraffe（长颈鹿）\n");
				break;
			default:
				printf("抱歉，这对我来说是个难题\n");
			}
		else
			printf("我只能理解小写字母\n");
		while (getchar() != '\n')
			continue;
		printf("输入下一个字母：\n");
	}
	printf("下次见！\n");


	return 0;
}