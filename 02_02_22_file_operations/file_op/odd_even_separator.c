#include<stdio.h>

void main()
{
	FILE *f1, *feven, *fodd;
	int c;

	f1 = fopen("numbers.txt","w+");
	fprintf(f1,"1,7,5,3,9,2,6,8,11");

	feven = fopen("even.txt","w");
	fodd = fopen("odd.txt","w");

	rewind(f1);
	//printf("Out of while\n");
	
	while(!feof(f1))
	{
		//printf("In while\n");

		//c = getc(f1);
		fscanf(f1,"%d,",&c);
		printf("%d,",c);

		if(c%2 == 0)
		{
			fprintf(feven,"%d,",c);
			//putc(c,feven);
		}
		else
		{
			fprintf(fodd,"%d,",c);
			//putc(c,fodd);
		}
	}

	fclose(f1);
	fclose(feven);
	fclose(fodd);
}
