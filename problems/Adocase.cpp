#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int rep, key[101];
    char s[11][101];
	scanf("%d", &rep); getchar();
	
	// Input for rep times
	for (int i = 0; i < rep; i++)
	{
		scanf("%d", &key[i]);
		scanf(" %[^\n]", &s[i]);
	}
	
	// Process the input
	for (int i = 0; i < rep; i++)
	{
		int len = strlen(s[i]);
		for (int j = 0; j <= len; j++)
		{
			char c = s[i][j];
			if (s[i][j-1] != 'a' && s[i][j-1] != 'd' && s[i][j-1] != 'o' && s[i][j-1] != ' ' && s[i][j-1] >= 'a' && s[i][j-1] <= 'z' && j%key[i]==0)
			{
				s[i][j-1] -= 32;
			}
		}
		printf("%s\n", s[i]);
	}
	return 0;
}


