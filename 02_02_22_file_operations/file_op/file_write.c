#include<stdio.h>

void main()
{
	FILE *fp;
	char str[200];

	fp = fopen("mahi.txt","w");
	fprintf(fp,"hello...how are you\n");

	fclose(fp);
}
