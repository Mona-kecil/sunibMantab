#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("testdata.in", "r");

    int testCase;
    fscanf(fp, "%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int totalDuration, minimumDuration, maximumDuration, lightningOccured = 0;
        fscanf(fp, "%d %d %d", &totalDuration, &minimumDuration, &maximumDuration);

        char *str = (char*) malloc(totalDuration * sizeof(char) + 1);
        fscanf(fp, "%s", str);

        for (int j = 0; j < totalDuration; j++)
        {
            if (str[j] == '1')
            {
                int index = j, duration = 0;
                while (str[index] == '1')
                {
                    duration++;
                    index++;
                }

                if (duration >= minimumDuration && duration <= maximumDuration)
                {
                    lightningOccured++;
                }
                
                j = index;
            }
        }

        printf("Case #%d: %d\n", i + 1, lightningOccured);
    }

    fclose(fp);
    return 0;
}
