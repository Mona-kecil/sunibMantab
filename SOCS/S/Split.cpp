#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    int arraySize;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &arraySize);
        int array[arraySize], sum = 0;

        for (int j = 0; j < arraySize; j++)
        {
            scanf("%d", &array[j]);
            sum += array[j];
        }

        int halvedArray = 0;
        bool splittable = false;
        for (int j = 0; j < arraySize; j++)
        {
            halvedArray += array[j];
            if (halvedArray * 2 == sum)
            {
                splittable = true;
                break;
            }
        }

        if (splittable == true)
            printf("Case #%d: Yes\n", i + 1);
        else
            printf("Case #%d: No\n", i + 1);
    }
    return 0;
}