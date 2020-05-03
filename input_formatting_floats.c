// Program to display input formatting with floats in C

#include <stdio.h>

int main(){
	float x, y;
	printf("Enter floating point values for two numbers x and y respectively: ");
	scanf("%3f%4f", &x, &y);

	/* Try value sets: x=5,y=5.9; x=5.1,y=1.23; x=1.23,y=4.5678
		and verify output sets: x=5.0,y=5.9; x=5.1,y=1.23; x=1.2,y=3.0 */

	printf("x=%f, y=%f\n", x, y);

	return 0;
}
