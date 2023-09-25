#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total_click, perfect = 100, bonus = 0, total_score = 0;
    scanf("%d", &total_click);

    for (int i = 1; i <= total_click; i++)
    {
        if (i > 1)
        {
            bonus += 50 * (i-1);
        }
    }
    total_score += perfect * total_click + bonus;
    printf("%d\n", total_score);
    return 0;
}
