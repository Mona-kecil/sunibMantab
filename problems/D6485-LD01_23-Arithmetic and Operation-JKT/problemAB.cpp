#include <stdio.h>

int main()
{
	int total_hit = 0, base_damage = 100, bonus_damage = 0, total_damage = 0;
	scanf("%d", &total_hit);
	
	for (int i = 1; i <= total_hit; i++)
	{
		if (i > 1)
		{
			bonus_damage += 50 * (i - 1);
		}
	}
	
	total_damage += base_damage * total_hit + bonus_damage;
	printf("%d\n", total_damage);
	return 0;
}
