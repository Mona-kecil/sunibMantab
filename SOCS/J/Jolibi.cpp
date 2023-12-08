#include <stdio.h>
#include <stdlib.h>

int main()
{
    int participants, total = 0;
    scanf("%d", &participants);

    int jolibi[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &jolibi[i]);
        total += jolibi[i];
    }

    int *participant = (int*) malloc(participants * sizeof(int));
    for (int i = 0; i < participants; i++)
    {
        scanf("%d", &participant[i]);
        total += participant[i];
    }

    int threshold = total / (3 + participants);

    for (int i = 0; i < 3; i++)
    {
        if (jolibi[i] < threshold)
            printf("%s tidak lolos\n", i == 0 ? "Jojo" : i == 1 ? "Lili" : "Bibi");
        else
            printf("%s lolos\n", i == 0 ? "Jojo" : i == 1 ? "Lili" : "Bibi");
    }
    return 0;
}