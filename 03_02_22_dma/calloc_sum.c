#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p, n, sum=0;
	printf("Enter the total numbers:\n");
	scanf("%d",&n);

	p = (int *)calloc(n,sizeof(int));

	printf("Enter numbers to calculate sum:\n");
	for(int i=0; i<n ; i++)
	{
		scanf("%d",p+i);
	}

	for(int i=0; i<n; i++)
	{
		sum += *(p+i);
	}
	printf("Sum is : %d\n",sum);
}
