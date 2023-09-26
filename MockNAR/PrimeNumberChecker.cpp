#include <stdio.h>

int isPrime(int prime)
{
	if (prime <= 1)
	{
		return 0;
	}
	
	if (prime == 2)
	{
		return 1;
	}
	
	for (int i = 2; i <= prime/2; i++)
	{
		if (prime % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int prime;
	scanf("%d", &prime);
	
	if (isPrime(prime) == 1)
	{
		printf("%d is a prime number!\n", prime);
	}
	else
	{
		printf("%d is not a prime number!\n", prime);
	}
	
	return 0;
}
