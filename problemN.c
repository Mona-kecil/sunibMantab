#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[2][101];
    float height[3];
    int age[3];

    scanf("%s %f %d %s %f %d", name[0], &height[0], &age[0], name[1], &height[1], &age[1]);
    
    printf("Name 1: %s\n", name[0]);
    printf("Height 1: %.2f\n", height[0]);
    printf("Age 1: %d\n", age[0]);
    printf("Name 2: %s\n", name[1]);
    printf("Height 2: %.2f\n", height[1]);
    printf("Age 2: %d\n", age[1]);
    return 0;
}
