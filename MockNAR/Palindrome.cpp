#include <stdio.h>
#include <string.h>

int isPalindrome(char string[])
{
	int leftCounter = 0, rightCounter = strlen(string) - 1;
	
	while (rightCounter > leftCounter)
	{
		if (string[leftCounter++] != string[rightCounter--])
		{
			printf("%s is not a palindrome!\n", string);
			return 0;
		}
		printf("%s is a palindrome!\n", string);
		return 0;
	}
}

int main()
{
	char string[256];
	scanf("%[^\n]", string);
	
	isPalindrome(string);
	
	return 0;
}
