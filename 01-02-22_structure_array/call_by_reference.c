#include<stdio.h>

void update_value(int*, int*);

void main()
{
	int a=10, b=20;
	printf("Before updating a=%d & b=%d\n",a,b);
	update_value(&a,&b);
	printf("After updating a=%d & b=%d\n",a,b);
}

void update_value(int *a, int *b)
{
	*a=12;
	*b=45;
}
