#include <stdio.h>

int main()
{
	int rep;
	printf("Berapa banyak angka yang mau dimasukkan?\n: ");
	scanf("%d", &rep);
	
	int num[rep];
	for (int i = 0; i < rep; i++)
	{
		scanf("%d", &num[i]);
	}
	
	int max = 0;
	for (int i = 0; i < rep; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	
	printf("Max value: %d\n", max);
	
	return 0;
}
