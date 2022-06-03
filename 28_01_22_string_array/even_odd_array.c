#include <stdio.h>

void main() {
	int n, even=0, odd=0, zero=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements of matrix: \n");
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
		if((a[i]%2) == 0)
		{
			even++;
		}
		else if(a[i] == 0)
		{
			zero++;
		}
		else
		{
			odd++;
		}
				
	}

	printf("Even are %d, odd are %d and zeroes are %d\n",even, odd, zero);
}
