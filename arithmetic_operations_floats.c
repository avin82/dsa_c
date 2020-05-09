/* Program to understand the floating point arithmetic operations */

#include <stdio.h>

int main(){
	float a=13.4, b=3.2;
	printf("Sum=%.2f\n", a+b);
	printf("Difference=%.2f\n", a-b);
	printf("Product=%.2f\n", a*b);
	printf("a/b=%.2f\n", a/b);

	// mixed arithmetic code
	int x=7, y=2;
	float z=2.0;
	printf("\n7/2: %f", x/y);	// (int/int) is an int
	printf("\n7/2: %d", x/y);
	printf("\n7/2.0: %f", x/z);	// (int/float) or (float/int) is a float

	return 0;
}
