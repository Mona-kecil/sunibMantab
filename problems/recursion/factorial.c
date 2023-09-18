#include <stdio.h>

unsigned long long fact(int num); //

int main()
{
    // Negative factorial is too complicated for me.
    int num = 1;
    printf("Every negative number will be converted into positive integer.\n");
    printf("Max value: 65, more than that you get 0 (unsigned long long limitation)\n: ");
    scanf("%d", &num);

    num = num < 0 ? num * -1 : (num == 0 ? 1 : num);
    // Basically check if its below 0, multiply with -1 (-10 * -1 = 10)
    // If its equal to 0, print 1
    // If its already a positive number, don't do anything to it.
    if (num == 1)
    {
        printf("Num is: %d\n", num);
        return 1;
    }

    printf("%llu\n", fact(num));
    return 0;
}

unsigned long long fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}
