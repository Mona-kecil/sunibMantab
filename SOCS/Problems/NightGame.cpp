#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int boxes;
        scanf("%d", &boxes);

        int *box = (int*) malloc(boxes * sizeof(int));
        for (int j = 0; j < boxes; j++)
            scanf("%d", &box[j]);

        printf("Case #%d: ", i + 1);
        for (int j = boxes; j > 0; j--)
        {
            if (j == 1)
                printf("%d\n", j);
            else
                printf("%d ", j);
        }
    }
    return 0;
}