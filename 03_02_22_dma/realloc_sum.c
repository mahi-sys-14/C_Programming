#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p, n, sum=0, m;
	printf("Enter the total numbers:\n");
	scanf("%d",&n);

	p = (int *)calloc(n,sizeof(int));

	printf("size of p : %ld\n",sizeof(p));

	printf("Enter numbers to calculate sum:\n");
	for(int i=0; i<n ; i++)
	{
		scanf("%d",p+i);
	}

	printf("Enter how many numbers you have to add:\n");
	scanf("%d",&m);

	p = (int *)realloc(p,(n+m)*sizeof(int));

	printf("size of p after reallocating: %ld\n",sizeof(p));

	printf("Enter numbers to add in calculating sum:\n");
	for(int i=n; i<n+m ; i++)
	{
		scanf("%d",p+i);
	}

	for(int i=0; i<n+m; i++)
	{
		sum += *(p+i);
	}
	printf("Sum is : %d\n",sum);
	printf("size of p final: %ld\n",sizeof(p));
	
	free(p);
}
