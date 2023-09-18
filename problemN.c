#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[2][101];
    float height[3];
    int age[3];

    for (int i = 0; i < 2; i++)
    {
        scanf("%s", name[i]);
        getchar();
        scanf("%f", &height[i]);
        scanf("%d", &age[i]);
    }

    for (int i = 1; i <= 2; i++)
    {
        printf("Name %d: %s\n", i, name[i - 1]);
        printf("Height %d: %.2f\n", i, height[i - 1]);
        printf("Age %d: %d\n", i, age[i - 1]);
    }
    return 0;
}
