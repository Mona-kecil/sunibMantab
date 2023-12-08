#include <stdio.h>

int main()
{
    int cage, animalEachCage, animalTotal = 0;
    scanf("%d", &cage);

    for (int i = 0; i < cage; i++)
    {
        scanf("%d", &animalEachCage);
        animalTotal += animalEachCage;
    }

    printf("%d\n", animalTotal);
    return 0;
}