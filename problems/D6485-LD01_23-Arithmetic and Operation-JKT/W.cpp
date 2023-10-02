#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        num[i] %= 100;
        num[i] /= 10;
        printf("%d\n", num[i]);
    }
    return 0;
}

/*
123
888
765
*/