#include<stdio.h>

int sum(int* , int*);

void main()
{
	int a, b;
	printf("Enter two numbers two add: \n");
	scanf("%d %d",&a, &b);
	
	int c = sum(&a,&b);
	printf("Addition of 2 numbers is %d\n",c);
}

int sum(int *a, int *b)
{
	int x = *a+*b;
	return x;
}
