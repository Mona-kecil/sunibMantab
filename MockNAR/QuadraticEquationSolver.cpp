#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, discriminant, root1, root2;
	
	printf("Enter coefficients of a, b, and c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	discriminant = b * b - 4 * a * c;
	
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
	}
	else if (discriminant == 0)
	{
		root1 = -b / (2 * a);
		printf("Root 1 = Root 2 = %.2lf\n", root1);
	}
	else
	{
		double realPart = -b / (2 * a);
		double imaginaryPart = sqrt(-discriminant) / (2 * a);
		printf("Root 1 = %.2lf + %.2lfi\nRoot 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
	}
	
	return 0;
}
