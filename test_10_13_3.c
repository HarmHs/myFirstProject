#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<ctype.h>
//animals

int main(void)
{
	char ch;
	printf("����һ��Сд��ĸ��");
	printf("Ȼ���һ����һ��������\n���Ǹ���ĸΪ�ס�\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower((unsigned char)ch))
			switch (ch)
			{
			case 'a':
				printf("Ant�����ϣ�,Alligator����������\n");
				break;
			case 'b':
				printf("Bear���ܣ�,Bird����\n");
				break;
			case 'c':
				printf("Cat��è��,Cow��ţ��\n");
				break;
			case 'd':
				printf("Dog������,Deer��¹��\n");
				break;
			case 'e':
				printf("Elephant������,Eagle��ӥ��\n");
				break;
			case 'f':
				printf("Fox�����꣩,Fish���㣩\n");
				break;
			case 'g':
				printf("Goat��ɽ��,Giraffe������¹��\n");
				break;
			default:
				printf("��Ǹ���������˵�Ǹ�����\n");
			}
		else
			printf("��ֻ�����Сд��ĸ\n");
		while (getchar() != '\n')
			continue;
		printf("������һ����ĸ��\n");
	}
	printf("�´μ���\n");


	return 0;
}