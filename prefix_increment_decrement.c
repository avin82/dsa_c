/* Program to display prefix increment and decrement in C */

#include <stdio.h>

int main(){
	int x=8;
	printf("x=%d\t", x);
	printf("x=%d\t", ++x);	// Prefix increment
	printf("x=%d\t", x);
	printf("x=%d\t", --x);	// Prefix decrement
	printf("x=%d\n", x);

	return 0;
}
