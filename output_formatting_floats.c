// Program to display output formatting with floats in C

#include <stdio.h>

int main(){
	float x, y;
	printf("Enter floating point values for two numbers x and y respectively: ");
	scanf("%f%f", &x, &y);

	/* Try value sets: x=8.0,y=5.9; x=15.231,y=16.12345
		and verify output sets: x= 8.0,y=   5.90; x=15.2,y=  65.12 */
	
	printf("x=%4.1f, y=%7.2f\n", x, y);

	return 0;
}
	
