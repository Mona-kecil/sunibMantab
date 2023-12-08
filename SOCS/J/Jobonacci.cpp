#include <stdio.h>

int job(int num) {
	if (num == 0) {
		return 0;
	} else if (num >= 1 && num <= 2) {
		return 1;
	}
	
	return job(num-1) + job(num-3);
}

int main() {
	int seq;
	scanf("%d", &seq);
	printf("%d\n", job(seq));
	return 0;
}
