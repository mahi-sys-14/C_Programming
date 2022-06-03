#include<stdio.h>

void swap_numbers(int *, int *);

void main()
{
	int a, b;
	printf("Enter two numbers to swap\n");
	scanf("%d %d", &a, &b);

	printf("Before swaping numbers are a=%d & b= %d\n",a,b);
	swap_numbers(&a, &b);
	printf("Ater swaping numbers are a=%d & b= %d\n",a,b);
}

void swap_numbers(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
