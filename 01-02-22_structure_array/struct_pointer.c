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
	struct student s1, *p;
	p = &s1;

	printf("Enter the Id, name , cgpa and backlogs of student:\n");
	scanf("%d %s %f %d",&p->sid, p->name, &p->cgpa, &p->backlogs);

	printf("Student Information is:\nid=%d\nname=%s\ncgpa=%f\nbacklogs=%d\n",p->sid,p->name,p->cgpa,p->backlogs);
}

