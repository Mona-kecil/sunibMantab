#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[2][101];
    float height[3];
    int age[3];

//    scanf("%s %f %d %s %f %d", name[0], height[0], age[0], name[1], height[1], age[1]);
    for (int i = 0; i < 2; i++)
    {
    	scanf("%[^\n]", name[i]);
    	scanf("%f", height[i]);
    	scanf("%d", age[i]);
	}
    printf("Input accepted.");
    for (int i = 0; i < 2; i++)
    {
        printf("Name %d: %s", i, name[i]);
        printf("Height %d: %.2f", i, (float)height[i]);
        printf("Age %d: %d", i, age[i]);
    }
    return 0;
}
