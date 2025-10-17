#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{

	int num;
	int io, ij;
	int sumj, sumo;
	sumj = sumo = 0;
	io = ij = 0;
	printf("Enter integer,0 to quit.\n");
	while ((scanf("%d", &num) == 1) && (num != 0))
	{
		if (num % 2 == 0)
		{
			io++;
			sumo += num;
		}
		else
		{
			ij++;
			sumj += num;
		}
	}
	float avgj, avgo;
	avgj = avgo = 0.0;
	if (io != 0)
		avgo = (float)sumo / io;
	if (ij != 0)
		avgj = (float)sumj / ij;
	printf("io:%d,ij:%d,avgo:%.2f,avgj:%.2f\n", io, ij, avgo, avgj);
}