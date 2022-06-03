#include <stdio.h>
void main() {
	int i;
	int a[]= {1,2,3,4,5};
	printf("Enter the position of element you want to print\n");
	scanf("%d",&i);
	printf("The elemnet at %d position is %d\n",i,a[i]);
}
