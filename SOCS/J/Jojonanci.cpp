#include <stdio.h>

int reverseFib(int num, int f1, int f2) {
	if (num == 0)
		return f1;
	if (num == 1)
		return f2;
		
	return reverseFib(num-1, f1, f2) - reverseFib(num-2, f1, f2);
}

int main() {
	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		int num, x, y, result;
		scanf("%d %d %d", &num, &x, &y);
		
		result = reverseFib(num, x, y);
		printf("Case #%d: %d\n", i+1, result);
	}
	return 0;
}
