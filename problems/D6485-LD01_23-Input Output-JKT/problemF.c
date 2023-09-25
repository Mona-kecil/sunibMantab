#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A;
    char String[101];

    scanf("%s", String);
    getchar();
    scanf("%d", &A);

    printf("%s\n", String);
    printf("%d\n", A);
    return 0;
}