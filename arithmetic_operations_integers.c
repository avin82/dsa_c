/* Program to display arithmetic operations with integers in C */

#include<stdio.h>

int main(){
	int x=-3, y=+4;	// Unary operators
	printf("%d\t%d\n", x, y);

	int a=17, b=4;
	printf("Sum=%d\n", a+b);
	printf("Difference=%d\n", a-b);
	printf("Product=%d\n", a*b);
	printf("Quotient=%d\n", a/b);
	printf("Remainder=%d\n", a%b);

	return 0;
}
