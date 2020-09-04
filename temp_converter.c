/* C program to convert degree Fahrenheit temperature of a city into degree Centigrade */

#include <stdio.h>
int main() {
	float c, f;	// c for Centigrade and f for Fahrenheit

	printf("Enter temperature of a city in degree Fahrenheit: ");
	scanf("%f", &f);

	c = (f - 32) * 5 / 9;

	printf("Temperature of the city in Centigrade = %0.2f\n", c);

	return 0;
}

