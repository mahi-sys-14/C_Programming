#include <stdio.h>

void main() {
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);

	int a[n], b[n];

	printf("Enter the elements of 1st  matrix: \n");
	for(int i=0; i<n ;i++)
	{
		scanf("%d",&a[i]);
		
	}

	for(int i=0; i<n ;i++)
	{
		printf("a[%d]: %d\n",i,a[i]);
	}

	for(int i=0; i<n ;i++)
	{ 
		b[i] = a[i];
	}


	printf("After copying Elements of matrix are: \n");
	for(int i=0; i<n ;i++)
	{
		printf("b[%d]: %d",i,b[i]);
		printf("\n");
	}

}
