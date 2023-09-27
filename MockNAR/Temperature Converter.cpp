#include <stdio.h>

float baseKelvin(int  temp, int scaleIndex)
{
	switch (scaleIndex)
	{
		case 2:
			return (float)temp-273.15;
		case 3:
			return 1.8 * (temp - 273) + 32;
		case 4:
			return ((float)temp - 273.15) * 0.8;
		case 5:
			return (float)temp * 1.8;
	}
}

float baseCelcius(int temp, int scaleIndex)
{
	 switch (scaleIndex)
	 {
	 	case 1:
	 		return (float)temp+273.15;
	 	case 3:
	 		return (float)temp * 1.8 + 32;
	 	case 4:
	 		return (float)temp * 0.8;
	 	case 5:
	 		return (float)temp * 1.8 + 491.67;
	 }
}

float baseFahrenheit(int temp, int scaleIndex)
{
	switch (scaleIndex)
	{
		case 1:
			return (((float)temp - 32) / 1.8) + 273.15;
		case 2:
			return 	((float)temp - 32) / 1.8;
		case 4:
			return ((float)temp - 32) / 2.25;
		case 5:
			return (float)temp + 459.67;
	}
}

float baseReamur(int temp, int scaleIndex)
{
	switch (scaleIndex)
	{
		case 1:
			return ((float)temp * 1.25) + 273.15;
		case 2:
			return (float)temp * 1.25;
		case 3:
			return ((float)temp * 2.25) + 32;
		case 5:
			return ((float)temp * 2.25) + 491.67;
	}
}

float baseRankine(int temp, int scaleIndex)
{
	switch (scaleIndex)
	{
		case 1:
			return (((float)temp - 491.67) / 1.8) + 273.15;
		case 2:
			return ((float)temp - 491.67) / 1.8;
		case 3:
			return (float)temp - 459.67;
		case 4:
			return ((float)temp - 491.67) / 2.25;
	}
}

int main()
{
	printf("Select base temperature scale:\n1. Kelvin\n2. Celcius\n3. Fahrenheit\n4. Reamur\n5. Rankine\n: ");
	int baseTemp;
	do
	{
		scanf("%d", &baseTemp);
	}
	while (baseTemp < 1 || baseTemp > 5);
	
	printf("Enter temperature: ");
	int temp;
	scanf("%d", &temp);
	
	printf("Select another temperature scale:\n1. Kelvin\n2. Celcius\n3. Fahrenheit\n4. Reamur\n5. Rankine\n: ");
	int convertTemp;
	do
	{
		scanf("%d", &convertTemp);
	}
	while (convertTemp < 1 || convertTemp > 5 || convertTemp == baseTemp);
	
	switch(baseTemp)
	{
		case 1:
			printf("%.2f\n", baseKelvin(temp, convertTemp));
			break;
		case 2:
			printf("%.2f\n", baseCelcius(temp, convertTemp));
			break;
		case 3:
			printf("%.2f\n", baseFahrenheit(temp, convertTemp));
			break;
		case 4:
			printf("%.2f\n", baseReamur(temp, convertTemp));
			break;
		case 5:
			printf("%.2f\n", baseRankine(temp, convertTemp));
			break;
		default:
			printf("Blom selesai kak hehe");
			break;
	}
	
	return 0;
}
