#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void main() {
	int num, user_num;
	char play_again;
label:
	srand(time(0));
	num = 1+rand()%100;

	//printf("Generated Random Number is %d\n",num);

	do
	{		
		printf("Guess the number: \n");
		scanf("%d",&user_num);

		if(user_num > num)
		{
			printf("Too High\n");
		} 
		else if(user_num < num)
		{
			printf("Too Low\n");
		}
		
	}while(user_num != num); 
	
	printf("Excellent! You guessed the number! Would you like to play again (y or n)?\n");
	char temp = getchar();
	scanf("%c",&play_again);

	printf("User is playing or not?\n%c\n",play_again);

	if(play_again=='y')
	{
		goto label;
	}	
}
