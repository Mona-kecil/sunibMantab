#include <stdio.h>

int main()
{
    int total_click, base_point = 100;
    long long int bonus_point = 0, total_point = 0;
    scanf("%d", &total_click);

    for (int i = 1; i < total_click; i++)
    {
        bonus_point += 50;
        total_point += bonus_point;
    }

    total_point += base_point * total_click;
    printf("%lld\n", total_point);
    return 0;
}