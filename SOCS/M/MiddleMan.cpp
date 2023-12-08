#include <stdio.h>

int main()
{
    int num;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        num %= 100;
        num /= 10;

        printf("%d\n", num);
    }
    return 0;
}