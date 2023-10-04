#include <stdio.h>

int main()
{
    int budget[3];

    scanf("%d %d %d", &budget[0], &budget[1], &budget[2]);
    
    int first = 0, second = 0, third = 0;
    for (int i = 0; i < 3; i++)
    {
        if (budget[i] > first) first = budget[i];
    }
    printf("%d\n", first);


}