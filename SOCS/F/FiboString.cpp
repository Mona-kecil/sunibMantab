#include <stdio.h>

void fibStr(int num, char f1, char f2) {
	if (num == 0)
		printf("%c", f1);
	else if (num == 1)
		printf("%c", f2);
	else {
		fibStr(num-1, f1, f2);
		fibStr(num-2, f1, f2);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		int num;
		char f1, f2;
		
		scanf("%d %c %c", &num, &f1, &f2);
		
		printf("Case #%d: ", i+1);
		fibStr(num, f1, f2);
		printf("\n");
	}
	return 0;
}
