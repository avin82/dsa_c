// Program to display constants used in C language

#include <stdio.h>
#define PI 3.14159	// Symbolic constant

int main(){
	const int a = 5;	// declare and initiliaze a constant
	printf("PI:%f", PI);

	int x = 012;	// declare and intialize a constant with Octal value
	printf("\nx=%d", x);	// print the decimal representation of the constant with Octal value
	printf("\nx=%o", x);	// print the Octal value of constant

	int y = 0x12;	// declare and initialize a constant with Hexadecimal value
	printf("\ny=%d", y);	// print the decimal representation of the constant with Hexadecimal value
	printf("\ny=%x", y);	// print the hexadecimal value of constant

	return 0;
}

