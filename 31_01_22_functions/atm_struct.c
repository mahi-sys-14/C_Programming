#include<stdio.h>

int login();
void reg();

unsigned long deposit,withdraw;
int i,c,a=0;
char trans='y';

struct atm_user
{
	int id;
	int pinn;
	unsigned long balance;
};

struct atm_user user[2];

void main()
{
	reg();
	int check=login();
	if(check>0)
	{
		printf("user %d logged in successfully\n",user[i].id);
		do
		{
			printf("1.check balance\n");
			printf("2.withdraw cash\n");
			printf("3.deposit cash\n");
			printf("4.Quit\n");
			printf("\n\n");
			
			printf("enter choice as per your requirement : ");
			scanf("%d",&c);
			switch (c)
			{
				case 1:
					printf("\nyour balance is : %lu",user[i].balance);
					break;
				case 2:
					printf("\nenter the amount you want to withdraw : ");
					scanf("%lu",&withdraw);
					if(withdraw%100!=0)
					{
						printf("\nplease enter the amount in multiple of 100's");
					}
					else if(withdraw>(user[i].balance-300))
					{
						printf("\nInsufficient balance");
					}
					else
					{
						user[i].balance=user[i].balance-withdraw;
						printf("\n\nplease collect amount");
						printf("\ncurrent available balance is : %lu",user[i].balance);
					}
					break;
				case 3:
					printf("\nenter the amount to deposit cash");
					scanf("%lu",&deposit);
					user[i].balance=user[i].balance+deposit;
					printf("\nyour new balance is : %lu",user[i].balance);
					break;
				case 4:
					printf("thank you!!");
					//a=1;
					break;
				default:
					printf("invalid entery");
			}
			printf("\n\n\n Do you want to do another transaction? (y/n) : \n");
			fflush(stdin);
			scanf("%c",&trans);
			if(trans=='n'||trans=='N')
				a=1;
		}while(!a);
		printf("\n\nthanks for using our ATM\n");
	}
}

void reg()
{
	for(i=0;i<2;i++)
	{
		user[i].id=(i+1);
		user[i].pinn=(i+1)*111;
		user[i].balance=(i+1)*3000;
	}
	printf("i = %d\n",i);
}

int login()
{
	int p,j,chance=3;
	do
	{
		printf("enter pin\n");
		scanf("%d",&p);
		if(p != user[i].pinn)
			chance--;
	}while(p != user[i].pinn && chance>0);
	printf("Chance %d",chance);

	if(chance==0)
	{
		return -1;
	}
	else
	{
		return p;
	}
}
