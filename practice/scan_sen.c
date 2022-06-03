/*
#include <stdio.h>
 
int main() {
	char str[100],str1[20], str2[10];
	scanf("%[^\n]s",str);
	printf("%s\n",str);

	scanf("%[^\n]s",str1);
	printf("%s\n",str1);

	scanf("%[^\n]s",str2);
	printf("%s\n",str2);

	return 0;
}
*/

#include <stdio.h>
#define MAX_LIMIT 100
void main()
{
   char str[MAX_LIMIT], str1[MAX_LIMIT];
   int page, price;

   printf("Enter page number: ");
   scanf("%d",&page);
   
   char temp=getchar();
   printf("Enter the 1st string: ");
   fgets(str, MAX_LIMIT, stdin);
   printf("str: %s", str);

   printf("Enter the 2nd string: "); 
   fgets(str1, MAX_LIMIT, stdin);
   printf("str1: %s", str1);

   printf("Enter price of book: ");
   scanf("%d",&price);

//   return 0;
}
