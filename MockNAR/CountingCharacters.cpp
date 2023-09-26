#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	scanf("%[^\n]", str);
	
	int len = strlen(str), counter = 0;
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			counter++;
		}
	}
	
	printf("Number of characters inside the string (excluding space): %d\n", counter);
	
	return 0;
}
