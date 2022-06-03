#include <stdio.h>

void main() {
	int row, col;
	printf("Enter number of rows and colums :");
	scanf("%d %d",&row, &col);

	int a[row][col];
	int b[row][col];

	printf("Enter the elements of 1st array matrix: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Elements of matrix are: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("Enter elements of 2nd array matrix: \n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("Elements of matrix are: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	int min1 = a[0][0], min2 = b[0][0], min;

	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			if(min1 > a[i][j])
			{
				min1 = a[i][j];
			}	
		}
	}
	printf("Minimum Value of 1st array is %d\n",min1);

	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			if(min2 > b[i][j])
			{
				min2 = b[i][j];
			}	
		}
	}
	printf("Minimum Value of 2nd array is %d\n",min2);

	min = min1<min2?min1:min2;
	printf("Minimum Value among the array is %d\n",min);
}
