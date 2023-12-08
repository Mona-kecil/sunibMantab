#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();
    
    for (int i = 0; i < testCase; i++)
    {
        int questions;
        scanf("%d", &questions);
        getchar();

        char *answer = (char*) malloc((questions + 1) * sizeof(char*));
        char *key = (char*) malloc((questions + 1) * sizeof(char*));
        
        scanf("%s", answer);
        scanf("%s", key);

        int correct = 0;
        for (int j = 0; j < questions; j++)
            if (answer[j] == key[j])
                correct++;

        int score = correct * 100 / (double)questions;

        printf("Case #%d: %d\n", i + 1, score);
    }
    return 0;
}