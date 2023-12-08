#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    
    int maleFrog[testCase], femaleFrog[testCase];
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &maleFrog[i], &femaleFrog[i]);

        if (maleFrog[i] * femaleFrog[i] % 2 == 0)
            printf("Case #%d: Party time!\n", i + 1);
        else
            printf("Case #%d: Need more frogs\n", i + 1);
    }
    return 0;
}