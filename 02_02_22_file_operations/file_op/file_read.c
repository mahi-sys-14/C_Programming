#include<stdio.h>

void main()
{
	FILE *fp;
	char str[200];

	fp = fopen("mahi.txt","r");

	fscanf(fp,"%s",str);
	printf("File content is: %s\n",str);
//	puts(str);

	fclose(fp);

}
