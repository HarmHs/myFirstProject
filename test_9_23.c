#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{//1.
	/*float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);*/
	/*int i = 2147483647;
	unsigned int j = 4294967295;
	printf("%d %d %d\n", i, i+1, i+2);
	printf("%u %u %u\n", j, j+1, j+2);*/
	/*float low = 0.4399E-10;
	printf("%f\n ", low * 0.1);*/
//2.
	//char word = 66;
	//printf("%c", word);
//3.
	/*printf("\a\n");
	printf("St sound, Sally shouted,\n");
	printf("\"By Pumpkin, what was that!\"");*/

//4.
	/*float i;
	
	printf("Enter a floating-point value:");
	scanf("%f", &i);
	printf("\nfixed - point notation: %f", i);
	printf("\nexponential notation: %e", i);
	printf("\np notation: %a",i);*/

//5.
	/*int age;
	printf("Enter your age:");
	scanf("%d", &age);
	printf("\nyour age equal %e seconds", age * 3.156E7);*/

//6.
	/*float quart;
	printf("Enter the quart of water:");
	scanf("%f", &quart);
	float member;
	member = quart * 950 / 3.0E10 - 23;
	printf("\nThe number of water molecule are: %e", member);*/


//#define WATER_PER_QUART 950       // 1夸脱水的克数
//#define MOLECULE_WEIGHT 3.0E-23f  // 单个水分子质量(克)
//
//		float quarts;
//		printf("输入水的夸脱数: ");
//
//		if (scanf("%f", &quarts) != 1) {
//			printf("输入错误！必须输入数字\n");
//			return 1;
//		}
//
//		if (quarts <= 0) {
//			printf("警告：水量应为正值\n");
//			return 1;
//		}
//
//		float molecules = quarts * WATER_PER_QUART / MOLECULE_WEIGHT;
//		printf("水分子的数量: %e\n", molecules);

//7.
//#define centimeter 2.54
//	printf("Enter the heigh:    (inch)");
//	printf("\b\b\b\b\b\b\b\b\b\b");
//	float heigh;
//	scanf("%f", &heigh);
//	heigh = heigh * centimeter;
//	printf("Your heigh are %f centimeter", heigh);

//8.
	/*float cup,pint, ounce, tablespoon, teaspoon;
	printf("Enter the number of cups:");
	scanf("%f", &cup);
	pint = 2 * cup;
	ounce = cup / 8;
	tablespoon = ounce / 2;
	teaspoon = tablespoon / 3;
	printf("pint:%f\nounce:%f\ntablespoon:%f\nteaspoon:%f\n", pint, ounce, tablespoon, teaspoon);*/





	return 0;


}