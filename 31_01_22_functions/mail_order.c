#include<stdio.h>

void main()
{
	int prod_id, quan;
        float bill=0;

	printf("Enter the product Id between 1 to 5 along with quantity of product you want...\n");

	for(int i=0; i<3; i++)
	{
		scanf("%d %d",&prod_id,&quan);

		switch(prod_id) {
			case 1:
				bill += 29.5*quan;
				break;
			case 2:
				bill += 45.0*quan;
				break;
			case 3:
				bill += 49.0*quan;
				break;
			case 4:
				bill += 95.5*quan;
				break;
			case 5:
				bill += 68.5*quan;
				break;
			default:
				printf("Enter Valid product ID\n");
		}
	}
	
	printf("Bill is %f\n",bill);

}
