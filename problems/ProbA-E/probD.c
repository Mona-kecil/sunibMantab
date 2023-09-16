#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Odd or even
    int num;

    scanf("%d", &num); getchar();

    if (num & 1 == 1)
    {
        printf("ODD\n");
        return 0;
    }
    printf("EVEN\n");
    return 0;
}
