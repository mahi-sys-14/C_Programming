#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p;
	p = (int *)malloc(sizeof(int)*4);
	printf("Address of p is: %p\n",p);
	*p = 25;
	printf("Value of p is: %d\n",*p);
	printf("Address of p is: %p\n",p);
}
