#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T = 3, degreePerSec[3];
    unsigned long totalSec[3];
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %lu", &degreePerSec[i], &totalSec[i]);
    }

    for (int i = 0; i < T; i++)
    {
        double totalDegree = degreePerSec[i] * totalSec[i];
        printf("%.2f\n", totalDegree / 360);
    }
    return 0;
}

/*
3
60 60
11 100000
7 100000
*/