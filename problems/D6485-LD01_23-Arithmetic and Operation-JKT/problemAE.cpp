#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total_click, perfect = 100;
    long long int bonus = 0, total_score = 0;
    scanf("%d", &total_click);

    for (int i = 1; i <= total_click; i++)
    {
        if (i > 1)
        {
            bonus += 50;
            total_score += bonus;
        }
    }
    total_score += perfect * total_click;
    printf("%lld\n", total_score);
    return 0;
}
