#include <stdio.h>

int main()
{
    int testcases;
    scanf("%d", &testcases);

    int gojo_cashback, bipay_cashback, decision[1000];
    for (int i = 0; i < testcases; i++)
    {
        scanf("%d %d", &gojo_cashback, &bipay_cashback);
        if (gojo_cashback > bipay_cashback) decision[i] = 1;
        else decision[i] = 2;
    }

    for (int i = 0; i < testcases; i++)
    {
        if (decision[i] == 1) printf("Case #%d: Go-Jo\n", i+1);
        else printf("Case #%d: Bi-Pay\n", i+1);
    }
    return 0;
}