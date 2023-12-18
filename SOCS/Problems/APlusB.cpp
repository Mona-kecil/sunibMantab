#include <stdio.h>

int main()
{
    int num1, num2;
    FILE *fp;
    fp = fopen("testdata.in", "r");

    if (fp == NULL)
        return 1;

    fscanf(fp, "%d %d", &num1, &num2);
    fclose(fp);

    int sum = num1 + num2;
    printf("%d\n", sum);

    return 0;
}