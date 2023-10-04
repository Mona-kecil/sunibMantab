#include <stdio.h>

int main()
{
    int testcaes;
    scanf("%d", &testcaes);

    for (int i = 0; i < testcaes; i++)
    {
        int a, b;
        int total, hasil = 0, hasil2 = 1;
    
        scanf("%d %d", &a, &b);
        
        while (a > 0 || b > 0)
        {
            total = (a%10) + (b%10);
            total %= 10;

            hasil += (total * hasil2);

            a /= 10;
            b /= 10;

            hasil2 *= 10;
        }
        printf("Case #%d: %d\n", i+1, hasil);
    }
}