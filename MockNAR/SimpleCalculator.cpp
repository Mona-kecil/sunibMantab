#include <stdio.h>

int main()
{
	int left, right;
	char sign;
	
	scanf("%d %c %d", &left, &sign, &right);	
	
	int result;
	switch (sign)
	{
		case '+':
			result = left + right;
			break;
		case '-':
			result = left - right;
			break;
		case '*':
			result = left * right;
			break;
		case '/':
			result = left / right;
			break;
		case '%':
			result = left % right;
			break;
		default:
			printf("This wasn't supposed to be printed out.\n'");
	}
	printf("Result: %d\n", result);
	
	return 0;
}
