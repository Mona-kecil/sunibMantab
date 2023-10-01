#include <stdio.h>

char board[4][4];
int size = 4;
int playerIndex = 1;

void cls();
void init();
void display();
void playerMove();
int checkWin();

int main()
{
    init();
    display();
    do
    {
        playerMove();
    }
    while (checkWin() == 0);
    printf("Player %d wins!", checkWin());
    return 0;
}

void cls()
{
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
                board[i][j] = 'X';
            }
            else if (i == 0 && j > 0)
            {
                board[i][j] = j + '0';
            }
            else if (i > 0 && j == 0)
            {
                board[i][j] = i+j+'0';
            }
            else if (i > 0)
            {
                board[i][j] = '_';
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
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void playerMove()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    if (board[x][y] != '_')
    {
        printf("Invalid move!\n");
        return;
    }
    if (playerIndex == 1)
    {
        board[x][y] = 'X';
        playerIndex--;
    }
    else
    {
        board[x][y] = 'O';
        playerIndex++;
    }
    cls();
    display();
}

int checkWin()
{
    int win = 0;
    for (int i = 1; i <= size; i++)
    {
        if (board[i][1] == 'X' && board[i][2] == 'X' && board[i][3] == 'X')
        {
            win = 1;
        }
        else if (board[i][1] == 'O' && board[i][2] == 'O' && board[i][3] == 'O')
        {
            win = 2;
        }
        else if (board[1][i] == 'X' && board[2][i] == 'X' && board[3][i] == 'X')
        {
            win = 1;
        }
        else if (board[1][i] == 'O' && board[2][i] == 'O' && board[3][i] == 'O')
        {
            win = 2;
        }
    }
    if (board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X')
    {
        win = 1;
    }
    else if (board[1][1] == 'O' && board[2][2] == 'O' && board[3][3] == 'O')
    {
        win = 2;
    }
    else if (board[1][3] == 'X' && board[2][2] == 'X' && board[3][1] == 'X')
    {
        win = 1;
    }
    else if (board[1][3] == 'O' && board[2][2] == 'O' && board[3][1] == 'O')
    {
        win = 2;
    }
    return win;
}