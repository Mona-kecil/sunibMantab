#include <stdio.h>

void stair(int size);
void pyramid(int height);
void box(int width, int height);

int main()
{
    int index, size, height, width, heigh;
    printf("1. stair\n2. pyramid\n3. box\n");

    do
    {
        scanf("%d", &index);
    } while (index < 1 || index > 3);

    switch (index)
    {
    case 1:
        printf("Size: ");
        do
        {
            scanf("%d", &size);
        } while (size <= 0);
        stair(size);
        break;

    case 2:
        printf("Height: ");
        do
        {
            scanf("%d", &height);
        } while (height <= 0);

        pyramid(height);
        break;

    case 3:
        do
        {
            printf("Width: ");
            scanf("%d", &width);
        } while (width <= 0);

        do
        {
            printf("Height: ");
            scanf("%d", &heigh);
        } while (heigh <= 0);

        box(width, heigh);

    default:
        printf("This wasn't supposed to happen.\n\n");
        break;
    }
    return 0;
}

void stair(int size)
// Set the breakpoint on line 6, 8, 10, and 12 then run in debug mode to see the code in action
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void pyramid(int height)
/*
$$$$ #
$$$ # #
$$ # # #
$ # # # #
 # # # # #
*/
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" #");
        }
        printf("\n");
    }
}

void box(int width, int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
