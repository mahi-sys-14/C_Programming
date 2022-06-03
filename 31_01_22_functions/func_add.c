#include<stdio.h>

void addition(int, int);

void main()
{
	int a, b;
	printf("Enter two numbers two add: \n");
	scanf("%d %d",&a,&b);

	addition(a,b);
}

void addition(int x, int y)
{
	int c = x+y;
	printf("The addition of %d and %d is %d\n",x,y,c);
}
