#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double pow(int n, double t);
int main(void)
{
	/*int lim;
	double power2, time;
	int count;
	printf("������Ҫִ�еĴ�����\n");
	scanf("%d", &lim);
	for (power2 = 1, count = 1, time = 0; count <= lim; power2 *= 2.0, count++)
	{
		time += 1 / power2;
		printf("time = %f when terms are %d\n", time, count);
	}
	printf("Done!");
	return 0;*/
	double x;
	int exp;
	printf("���������ݣ�\n");
	double exn;

	while (scanf("%lf%d",&x,&exp) == 2)
	{
		exn = pow(exp, x);
		printf("%f", exn);
		printf("������һ�������ݣ�\n");

		
	}



	return 0;
}
double pow(int n, double t)
{
	int count;
	double pow = 1;
	for (count = 1; count <= n; count++)
		pow *= t;

	return (double) pow;
}