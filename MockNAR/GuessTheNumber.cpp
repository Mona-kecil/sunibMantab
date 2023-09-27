#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand(time(0));
	int randomNumber;
	do
	{
		randomNumber = rand() % 100;
	}
	while (randomNumber == 0);
	
	int guess;
	do
	{
		scanf("%d", &guess);
		if (guess > randomNumber)
		{
			printf("Lower!\n");
		}
		else if (guess < randomNumber)
		{
			printf("Higher!\n");
		}
		else
		{
			printf("Bullseye!\n");
		}
	}
	while (guess != randomNumber);
	return 0;
}
