#include<stdio.h>

extern void add(int, int);

void main()
{
	extern int a, b; //from extern2.c file
	printf("The value of variable from extern2 file are %d & %d\n",a,b);
	printf("Calling add function from extern3 file and using variables of exten2 file\n");
	add(a, b); //from extern3.c file
}
