#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    for (int i = N; i < N+M; i++)
        printf("%d\n", i);
    
    return 0;
}