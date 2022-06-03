#include <stdio.h>

void main() {
	int row, col;
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&row, &col);

	int a[row][col];

	printf("Enter the elements of matrix: \n");

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

}
