#include <stdio.h>

int main()
{
    char letter[3];
    int order[3] = {1, 2, 3};
    scanf("%c %c %c", &letter[0], &letter[1], &letter[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (letter[i] < letter[j])
            {
                char tempLetter = letter[i];
                letter[i] = letter[j];
                letter[j] = tempLetter;

                int tempOrder = order[i];
                order[i] = order[j];
                order[j] = tempOrder;
            }
        }
    }

    printf("%d %d %d\n", order[0], order[1], order[2]);
    return 0;
}