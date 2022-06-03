#include<stdio.h>
#include<string.h>
void main() {
	char name1[10]={'M','A','\0'};
	char name2[10]="Mahima";
	char name3[]="Vaghela";

	int length = strlen(name2);
	printf("%d\n",length);
}
