#include <stdio.h>
// Wouldn't work in VSCode, use Dev-C++

int main(int argc, char const *argv[])
{
    int jlh, pos;

    scanf("%d", &jlh); getchar();
    int ct[jlh];
    for (int i = 0; i < jlh; i++)
    {
        scanf("%d", &ct[i]); getchar();
        if (ct[i] < 40)
        {
            pos++;
        }
    }
    printf("Positif: %d\n", pos);
    return 0;
}
