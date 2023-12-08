#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int num, pos;
        scanf("%d %d", &num, &pos);

        int binary[32] = {0};
        int index = 31;
        while (num > 0)
        {
            binary[index--] = num % 2;
            num /= 2;
        }
        printf("%d\n", binary[31 - pos]);
    }
    return 0;
}