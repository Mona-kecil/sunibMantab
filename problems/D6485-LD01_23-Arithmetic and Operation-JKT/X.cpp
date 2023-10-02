#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[3];
    unsigned int total = 1;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
        total *= num[i];
    }
    printf("%u\n", total);
    return 0;
}
