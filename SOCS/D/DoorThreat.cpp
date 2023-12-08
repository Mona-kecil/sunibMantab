#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int numberOfRooms, numberOfPatterns;
        scanf("%d %d", &numberOfRooms, &numberOfPatterns);

        int rooms[numberOfRooms] = {0};

        for (int j = 0; j < numberOfPatterns; j++)
        {
            int pattern;
            scanf("%d", &pattern);

            for (int k = pattern; k <= numberOfRooms; k += pattern)
            {
                (rooms[k - 1] == 1) ? rooms[k - 1] = 0
                                    : rooms[k - 1] = 1;
            }
        }

        int empty = 0;
        
        printf("Case #%d:", i + 1);
        for (int j = 0; j < numberOfRooms; j++)
        {
            if (rooms[j] == 0)
            {
                empty = 1;
                printf(" %d", j + 1);
            }
        }

        if (empty == 0)
        {
            printf(" No room left!\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
