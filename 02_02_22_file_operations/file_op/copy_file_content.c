#include<stdio.h>

void main()
{
	FILE *f1, *f2;
	char c;

	f1 = fopen("hello.txt","r+");
	f2 = fopen("mahi.txt","a+");

	while(!feof(f1))
	{
		c = getc(f1);
		printf("%c",c);
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
}
