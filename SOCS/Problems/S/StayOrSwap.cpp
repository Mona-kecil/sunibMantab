#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int numOfPlates, bellyCapacity, initialPortion, portionOnEachPlate;
        scanf("%d %d %d", &numOfPlates, &bellyCapacity, &initialPortion);

        for (int j = 0; j < numOfPlates; j++)
        {
            scanf("%d", &portionOnEachPlate);
            
            if (portionOnEachPlate > initialPortion && portionOnEachPlate <= bellyCapacity)
                initialPortion = portionOnEachPlate;
        }
        printf("Case #%d: %d\n", i + 1, initialPortion);
    }
    return 0;
}