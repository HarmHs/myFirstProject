#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SEVEN 7
#define HOUR 60
void lif(double n);
void temperature(double n);
int main(void)
{
	/*int n = 0;
	char a;
	while (n++ < SEVEN)
	{
		a = (char)(n+96);
		printf("%c ", a);

	}
	printf("\n");*/

	/*int hour, min, time;
	printf("输入时间（分钟）：");
	scanf("%d", &time);
	while (time > 0)
	{
		hour = time / HOUR;
		min = time % HOUR;
		printf("time:%d hour:%d min:%d\n", time, hour, min);
		printf("enter next:\n");
		scanf("%d", &time);

	}
	printf("Done!");*/
	
	
	/*int a,t;
	printf("enter a integer:");
	scanf("%d", &a);
	t = a;
	printf("%d\n", t);
	while (a++ < t + 10)
	{
		
		printf("%d\n", a);

	}*/

	/*int day, week,remain;
	printf("输入天数：");
	scanf("%d", &day);
	while (day > 0)
	{
		week = day / 7;
		remain = day % 7;
		printf("%d days are %d weeks, %d days.\n", day, week, remain);
		printf("enter next:");
		scanf("%d", &day);

	}
	printf("Done!");*/


	/*float cm,foot,inch;
	printf("输入一个身高（单位：厘米）：");
	scanf("%f", &cm);
	while (cm > 0)
	{
		inch = cm * 0.394;
		foot = cm * 0.0328;
		printf("%.2f cm = %.2f feet, %.2f inches\n", cm, foot, inch);
		printf("enter next(<=0 to quit):\n");
		scanf("%f", &cm);




	}
	printf("bye");*/


	
	/*double x;
	printf("输入一个double类型：");
	scanf("%lf", &x);
	lif(x);*/
	
	/*int a, b,c;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &a);
	printf("\nNow enter the first operand:");
	scanf("%d", &b);
	while (a > 0 && b > 0)
	{
		c = b % a;
		printf("%d %% %d is %d\n", b, a, c);
		printf("Enter next number for first operand(<= 0 to quit):");
	
		scanf("%d", &b);


	}
	printf("Done!");*/


	printf("输入一个华氏温度：\n");
	float hs, ss, ks;
	;
	while (scanf("%f", &hs) == 1)
	{
		temperature(hs);



	}
	printf("Done!");






	return 0;
}
void lif(double n)
{
	n = n * n * n;
	printf("%lf", n);



}

void temperature(double n)
{
	const float T = 32.0;
	const float Z = 273.16;
	const float M = 5.0 / 9.0;
	printf("摄氏：%.2f\n", M * (n - T));
	printf("开氏：%.2f\n", (M * (n - T)) + Z);
	printf("继续输入下一个华氏温度：\n");

}