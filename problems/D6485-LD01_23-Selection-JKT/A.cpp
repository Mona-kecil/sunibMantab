#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num&1 == 1) printf("ODD\n");
    else printf("EVEN\n");
}