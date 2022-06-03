#include<stdio.h>

void main()
{
	FILE *fp;
	int marks;
	char name[20];

	fp = fopen("students.txt","w");

	do
	{
		printf("Enter name and marks of student:\n");
		scanf("%s %d",name, &marks);

		fprintf(fp,"Name: %s ,Marks: %d\n",name,marks);
	
	}while(marks!=100);

	fclose(fp);
}
