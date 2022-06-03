#include<stdio.h>

void swap_number(int, int);

void main()
{
	int a, b;
	printf("Enter two numbers two swap: \n");
	scanf("%d %d",&a, &b);

	printf("Before Swapping numbers are a=%d & b=%d\n",a,b);
	swap_number(a,b);
}

void swap_number(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

	printf("After Swapping numbers are a=%d & b=%d\n",x,y);
}
