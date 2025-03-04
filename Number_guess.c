#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int random,guess;
	int no_of_guess = 0;
	srand(time(0));
	
	printf("Welcome to the world of Guessing Numbers\n");
	random = rand() % 100 + 1;
//	printf("Random no.:: is %d\n",random);
	do
	{
		printf("Please enter your Guess between 1 to 100.::");
		scanf("%d",&guess);
		no_of_guess++;
		
		if(guess < random)
		{
			printf("Guess larger number.\n");
		}
		else if(guess > random)
		{
			printf("Guess a smaller number.\n");
		}
		else
		{
			printf("Congratulations !You have successfully guessed the Number %d attempts.",no_of_guess);
		}
		
	}while(guess != random);
	
	printf("\nBye, Thanks for playing.");
}