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

	printf("Printing in reverse Elements of matrix are: \n");
	for(int i=n-1; i>=0 ;i--)
	{
		printf("a[%d]: %d",i,a[i]);
		printf("\n");
	}

}
