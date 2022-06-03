#include<stdio.h>
void main() {
	//Different ways to initialize a string
	char name1[10]={'M','A','H','I','M','A','\0'};
	char name2[10]="Mahima";
	char name3[]="Vaghela";

	printf("%s %s %s\n",name1, name2, name3);
}
