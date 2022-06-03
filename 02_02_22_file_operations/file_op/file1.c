#include<stdio.h>

void main()
{
	FILE *f_op;
	char str[50];

	f_op = fopen("hello.txt","w+");
	fprintf(f_op,"Mahi's New Notebook\n");  	// to write to the file
	
	rewind(f_op);
	fscanf(f_op,"%s",str);				// to read or scan from the file
	printf("File new content is : %s\n",str);	// printing content of file

	fclose(f_op);
}
