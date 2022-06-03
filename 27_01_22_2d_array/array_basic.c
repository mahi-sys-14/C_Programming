#include<stdio.h>
void main() {
	int n;
//	int array[10];
	float avg=0; 
	int sum=0;

	printf("Enter the total number of elements of array: \n");
	scanf("%d",&n);

	int array[n];

	printf("Enter the elements of array: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&array[i]);
	}

	for(int i=0; i<n; i++)
	{
		sum = sum + array[i];
	}

	printf("Sum of array is %d\n",sum);

	int min = array[0];

	for(int i=0; i<n ; i++) 
	{
		if(min > array[i])
		{
			min = array[i];
		}
	}

	printf("The smallest element is %d\n",min);

	int max = array[0];	
			
	for(int i=0; i<n ; i++) 
	{
		if(max < array[i])
		{
			max = array[i];
		}
	}

	printf("The largest element is %d\n",max); 

	int length = sizeof(array)/sizeof(array[0]);
	printf("Length of array is %d\n",length);

	avg = (float)sum/(float)n;
	printf("Average of array is %f\n",avg);
}
