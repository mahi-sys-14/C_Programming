#include<stdio.h>
#include<string.h>

struct student{
	int sid;
	char name[20];
	float cgpa;
	int backlogs;
};

void main()
{
	int n,i;

	printf("Enter how many students details\n");
	scanf("%d",&n);
	
	struct student s[n];

	printf("Enter the Id, name , cgpa and backlogs of students\n");

	for(i=1; i <= n;i++)
	{
		printf("Details of Student %d\n",i);
		scanf("%d %s %f %d",&s[i].sid, s[i].name, &s[i].cgpa, &s[i].backlogs);
	}

	for(i=1;i <= n;i++)
	{
		printf("Student %d Information is:\nid=%d\nname=%s\ncgpa=%f\nbacklogs=%d\n",i,s[i].sid,s[i].name,s[i].cgpa,s[i].backlogs);
	}

}

