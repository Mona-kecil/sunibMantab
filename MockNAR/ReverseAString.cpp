#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	scanf("%[^\n]", str);
	
	int len = strlen(str);
	char reversed[len+1];
	int index = len-1;
	
	for (int i = 0; i < len; i++)
	{
		reversed[i] = str[index];
		index--;
	}
	
	printf("%s\n", reversed);
	
	return 0;
}
