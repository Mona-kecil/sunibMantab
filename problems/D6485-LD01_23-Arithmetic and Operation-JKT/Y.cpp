#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T = 3;
    int percent[3], price[3];

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &percent[i], &price[i]);
    }

    for (int i = 0; i < T; i++)
    {
        double percentage = (double)percent[i] * (double)price[i] / 100.0;
        printf("%.2f\n", percentage);
    }
    return 0;
}

/*
3
50 80
12 24
1 100
*/