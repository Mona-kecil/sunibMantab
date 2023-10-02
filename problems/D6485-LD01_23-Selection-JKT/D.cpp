#include <stdio.h>
// Linear solution
int main()
{
    int testcases;
    scanf("%d", &testcases);

    int male_frog, female_frog, decision[1000];
    for (int i = 0; i < testcases; i++)
    {
        scanf("%d %d", &male_frog, &female_frog);
        int bottom = (male_frog <= female_frog) ? male_frog : female_frog;
        int acquaintanceship = 0;
        while (bottom >= 0)
        {
            acquaintanceship++;
            male_frog--; female_frog--; bottom--;
        }
        if (acquaintanceship&1 == 1) decision[i] = 1;
        else decision[i] = 0;
    }

    for (int i = 0; i < testcases; i++)
    {
        if (decision[i] == 1) printf("Case #%d: Need more frogs\n", i+1);
        else printf("Case #%d: Party time!\n", i+1);
    }
    return 0;
}