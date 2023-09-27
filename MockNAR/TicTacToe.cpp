#include <stdio.h>

int board[4][4], size = 4;
// Function to initialize the board
void init();
void display();
void change(int X, int Y, int player);
void cls();
int checkWin();

int main()
{	
	// Initialize the board
	init();
	
	// Visualize the board
	display();
		
	// Loop player until board full or player wins the game	
	int playerIndex = 1;
	int isPlaying = 1;
	
	while (isPlaying == 1)
	{
		printf("\nPlayer %d, enter X and Y coordinate to place your symbol!\n: ", playerIndex);
		
		int x, y;
		do
		{
			scanf("%d %d", &y, &x);
			if (board[x][y] != 0)
			{
				printf("\nHey, that place is already taken. Choose another place!\n");
			}
		}
		while(board[x][y] != 0);
		
		change(x, y, playerIndex);
		cls();
		display();
		if (playerIndex == 1)
		{
			playerIndex++;
		}
		else
		{
			playerIndex--;
		}
		
		if (checkWin() == 0)
		
		{
			break;
		}
	}
	  
}


void cls()
{
	// Clear screen and display the new board
	printf("\e[1;1H\e[2J");
}

void init()
{	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0 && j == 0)
			{
				board[i][j] = NULL;
			}
			else if (i == 0 && j > 0)
			{
				board[i][j] = j;
			}
			else if (i > 0 && j == 0)
			{
				board[i][j] = j+i;
			}
			else if (i > 0)
			{
				board[i][j] = NULL;
			}
		}
	}
}

void display()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}

void change(int X, int Y, int player)
{
	if (player == 1)
	{
		board[X][Y] = 5;
	}
	else
	{
		board[X][Y] = 8;
	}
}

int checkWin() // Fix
{
	// Rows
	for (int i = 1; i < size; i++)
	{
		if (board[i][1] == 5 && board[i][2] == 5 && board[i][3] == 5)
		{
			printf("Player 1 wins!\n");
			return 0;
		}
	}
}

