#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GREEN_TEXT	"\x1b[32m"
#define ORANGE_TEXT	"\x1b[38;2;255;165;0m"
#define RED_TEXT	"\x1b[31m"
#define RESET_COLOR	"\x1b[0m"

int main(void)
{
	int	userch;
	int	randch;
	
	srand(time(NULL));
	
	printf("Welcome to the Rock, Paper, Scissors game.\n");
	printf("Please choose your move:\n");
	printf("1. Rock\n");
 	printf("2. Paper\n");
 	printf("3. Scissors\n");
	printf("Your choice: ");
	scanf("%d", &userch);
	
	randch = rand() % 3 + 1;
	if (randch == 1) 
	{
		printf("CPU used Rock!\n");
	} 
	else if (randch == 2)
	{
        	printf("CPU used Paper!\n");
	}
	else if (randch == 3)
	{
        	printf("CPU used Scissors!\n");
	}

	if (userch == randch)
	{
        	printf(ORANGE_TEXT "Seems like neither of us is ready to concede defeat just yet. Round two, babe?\n" RESET_COLOR);
	}
	else if ((userch == 1 && randch == 3) || (userch == 2 && randch == 1) || (userch == 3 && randch == 2))
	{
        	printf(GREEN_TEXT "Well, well, well, looks like someone managed to pull off a win. Impressive, I guess..\n" RESET_COLOR);
	}
	else
	{
        	printf(RED_TEXT "Looks like luck's on my side today. Better luck next time, loser!\n" RESET_COLOR);
	}
	return (0);
}
