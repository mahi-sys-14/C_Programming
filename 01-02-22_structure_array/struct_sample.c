#include<stdio.h>
#include<string.h>

struct student{
	int sid;
	char name[20];
	float cgpa;
	int backlogs;
}s1;

void main()
{
	struct student s2;

	printf("Enter the Id, name , cgpa and backlogs of student1:\n");
	scanf("%d %s %f %d",&s1.sid, s1.name, &s1.cgpa, &s1.backlogs);

	printf("Student1 Information is:\nid=%d\nname=%s\ncgpa=%f\nbacklogs=%d\n",s1.sid,s1.name,s1.cgpa,s1.backlogs);

	s2.sid = 12;
	strcpy(s2.name, "Mahima");
	s2.cgpa = 9.6;
	s2.backlogs = 0;

	printf("Student2 Information is:\nid=%d\nname=%s\ncgpa=%f\nbacklogs=%d\n",s2.sid,s2.name,s2.cgpa,s2.backlogs);
}

