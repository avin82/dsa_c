// Program to display input formatting with integers in C

#include <stdio.h>

int main(){
	int a, b;
	printf("Enter values for two numbers a and b respectively: ");
	scanf("%2d%3d", &a, &b);

	/* Try value sets: a=6,b=39; a=12,b=123; a=123,b=1234; a=12,b=1234
		and verify output sets: a=6,b=39; a=12,b=123; a=12,b=3; a=12,b=123 respectively */

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
