#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    getchar();

    if (num&1 == 1)
    {
        printf("odd\n");
        return 0;
    }
    printf("even\n");
    return 0;
}