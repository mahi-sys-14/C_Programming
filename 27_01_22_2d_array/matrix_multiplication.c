#include <stdio.h>

void main() {
	int row, col;
	printf("Enter number of rows and colums :");
	scanf("%d %d",&row, &col);

	int a[row][col];
	int b[row][col];
	int c[row][col];

	printf("Enter the elements of 1st matrix: \n");
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

	printf("Enter elements of 2nd matrix: \n");
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

	printf("Multiply 2 matrix: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			c[i][j] = 0;
			for(int k=0; k<col ;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}

	printf("printing elements of multiplied matrix: \n");
	for(int i=0; i<row ;i++)
	{
		for(int j=0; j<col; j++) 
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
