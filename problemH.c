#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[101];
    scanf("%[^\n]", name);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);
    return 0;
}