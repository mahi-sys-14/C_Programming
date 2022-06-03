#include <stdio.h>

void main() {
	int row, col;
	int neg=0, zero=0, pos=0;
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
			if(a[i][j] < 0)
			{
				neg++;
			}
			else if(a[i][j] == 0)
			{
				zero++;
			}
			else
			{
				pos++;
			}
		}
	}

	printf("negative are %d\nzero are %d\npositive are %d\n",neg,zero,pos);

}
