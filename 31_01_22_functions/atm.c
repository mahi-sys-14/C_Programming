//login
//check balance
//cash withdrawal
//deposit

#include<stdio.h>

int login();

int user[] = {0,1,2,3,4};
int pin[] = {1234, 2345,3456,4567,5678};
int balance[] = {5000, 10000, 150000, 20000, 25000};

void main()
{
	int check,op,withdraw,deposit,repeat=0;

	check=login();
	if(check != -1)
	{
		printf("Login Successfully!!\n");

		do
		{
			printf("Enter\n1.Check Balance\n2.Cash Withdrawal\n3.Cash Deposit\n4.Quit\n");
			scanf("%d",&op);

			switch(op)
			{
				case 1:
					printf("Balance : %d\n",balance[check]);
					break;
				case 2:
					printf("Enter the amount you want to withdraw\n");
					scanf("%d",&withdraw);
		
					if(withdraw > balance[check])
					{
						printf("Insufficient Balance\n");
					}
					else
					{
						balance[check] = balance[check] - withdraw;
					}
					break;
				case 3:
					printf("Enter the amount you want to deposit\n");
					scanf("%d",&deposit);

					balance[check] = balance[check] + deposit;
					break;
				case 4:
					printf("Thanks for Visiting! Welcome Again\n");
					repeat = 1;
					break;
			}
		}while(repeat != 1);
	}
	else
	{
		printf("Card Blocked");
	}
}

int login()
{
	int id, p, chance=0;
	printf("Enter your account from 0 to 4\n");
	scanf("%d",&id);

	do
	{
		printf("Enter your pin\n");
		scanf("%d",&p);
		//printf("pin for id is : %d\n",pin[id]);
		if(p == pin[id])
		{
			return id;
		}
		else
		{
			chance++;
		}

	}while(pin[id] != p && chance!=3);

	if(chance == 3)
	{
		return -1;
	}
}
