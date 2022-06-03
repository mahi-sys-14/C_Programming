#include <stdio.h>

void main() {
	int row, col;
	printf("Enter number of rows and colums :");
	scanf("%d %d",&row, &col);

	int a[row][col];
	int b[row][col];
	int c[row][col];

	printf("Enter the elements of 1st array matrix: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Elements of 1st matrix are: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("Enter elements of 2nd matrix array: \n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("Elements of 2nd matrix are: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	printf("Adding 2 matrix: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("printing elements of added matrix: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
