#include <stdio.h>

int main()
{
    int diceThrown, position = 0, diceValue;
    scanf("%d", &diceThrown);

    for (int i = 0; i < diceThrown; i++)
    {
        scanf("%d", &diceValue);
        position += diceValue;

        if (position == 9)
            position = 21;
        else if (position == 33)
            position = 42;
        else if (position == 76)
            position = 92;
        else if (position == 53)
            position = 37;
        else if (position == 80)
            position = 59;
        else if (position == 97)
            position = 88;
        else
            continue;
    }
    printf("%d\n", position);
    return 0;
}