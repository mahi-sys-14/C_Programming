#include <stdio.h>
void main() {
	int a,i,flag=0;
	printf("Enter the number to check whether its prime or not: \n");
	scanf("%d",&a);

	for(i=1; i<a/2; i++);
	{
		if((a%i)==0)
		{
			flag = 0; 
		}
		else
		{
			flag=1;
		}
	}

	if (flag == 1)
	{
		printf("It's a prime number");
	}
	else 
	{ 
		printf("It's not prime number");
	}
}
