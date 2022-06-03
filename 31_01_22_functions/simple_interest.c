#include<stdio.h>

void calculate_SI(int, int, int);

void main()
{
	int p, r, t;
	printf("Enter the principle, rate and time: \n");
	scanf("%d %d %d",&p,&r,&t);

	calculate_SI(p,r,t);
}

void calculate_SI(int prin, int rate, int time)
{
	float si;
	si = (float)(prin*rate*time)/100;
	printf("Simple Interest for time %d is %f\n",time, si);
}
