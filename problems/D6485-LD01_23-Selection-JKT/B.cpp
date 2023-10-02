#include <stdio.h>

int main()
{
    int testcases;
    scanf("%d", &testcases);

    int needed, available, on_sale, is_fixable[1000];
    for (int i = 0; i < testcases; i++)
    {
        scanf("%d %d %d", &needed, &available, &on_sale);
        if (needed <= available + on_sale) is_fixable[i] = 0;
        else is_fixable[i] = 1;
    }

    for (int i = 0; i < testcases; i++)
    {
        if (is_fixable[i] == 1) printf("Case #%d: no\n", i+1);
        else printf("Case #%d: yes\n", i+1);
    }
}