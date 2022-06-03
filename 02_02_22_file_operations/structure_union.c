#include<stdio.h>
#include<string.h>

void main()
{
	struct student
	{
		int id;
		char name[20];
		float cgpa;
		int backlogs;
	}s1;

	union books
	{
		char title[20];
		char author[20];
		int pages;
		int price;
	}u1;

	s1.id=2;
	s1.cgpa=8.9;

	printf("Student Info : \nid=%d \ncgpa=%f\n",s1.id,s1.cgpa);

	printf("Books Info\n");

	u1.pages = 800;
	printf("Pages are %d\n",u1.pages);

	//u1.price = 600;
	printf("Enter the price of book\n");
	scanf("%d",&u1.price);
	printf("pages are %d\n",u1.pages);
	printf("Price is %d\n",u1.price);

	strcpy(u1.author,"Mahima");
	printf("Author name is %s\n",u1.author);
	printf("pages are %d\n",u1.pages);
	printf("Price is %d\n",u1.price);
}
