#include <stdio.h>

int main()
{
	int rep;
	int views[100];
	int teman;
	int indexStart[100], indexEnd[100];

	scanf("%d", &rep);

	for (int i = 0; i < rep; i++)
	{
		scanf("%d", &views[i]);
	}

	scanf("%d", &teman);

	for (int i = 0; i < teman; i++)
	{
		scanf("%d %d", &indexStart[i], &indexEnd[i]);
	}

	for (int i = 0; i < teman; i++)
	{
		int totalview = 0;
		for (int j = indexStart[i]; j <= indexEnd[i]; j++)
		{
			totalview += views[j - 1];
		}
		printf("Case #%d: %d\n", i + i, totalview);
	}
}