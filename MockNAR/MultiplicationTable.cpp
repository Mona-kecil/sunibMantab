#include <stdio.h>

int main()
{
	printf("Input a number: ");
	int num;
	scanf("%d", &num);
	
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", num, i, num * i);
	}
	return 0;
}