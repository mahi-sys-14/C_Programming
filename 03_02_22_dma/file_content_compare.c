#include<stdio.h>

void main()
{
	FILE *f1, *f2;
	char c1, c2;
	int flag=0;

	f1 = fopen("file1.txt","r");
	f2 = fopen("file2.txt","r");

	while(!feof(f1))
	{
		c1 = getc(f1);
		c2 = getc(f2);
		printf("c1: %c & c2: %c\n",c1,c2);
		if(c1 != c2)
		{
			printf("In condition c1: %c & c2: %c\n",c1,c2);
			flag = 1;
			break;
		}
	}

	if(flag == 0)
	{
		printf("File contents are same\n");
	}
	else
	{
		printf("File content is not same\n");
	}

	fclose(f1);
	fclose(f2);	
}
