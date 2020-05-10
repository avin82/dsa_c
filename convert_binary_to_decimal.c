/* Program to convert a binary number to a decimal number.
	This is not an optmised program but just to demonstrate the usage of while loops.
	In real world, the input binary number needs to read as a string instead of an integer
	as in here, and also checked for every bit to hold a binary value 0 or 1.*/

#include <stdio.h>

int main(){
	int n, binary, rem, d, j=1, dec=0;
	printf("Enter the number in binary: ");
	scanf("%d", &n);
	binary = n;
	while (n > 0){
		rem = n % 10;	// Taking last digit of n
		d = rem*j;
		dec += d;
		j *= 2;
		n /= 10;	// Skipping last digit of n
	}

	printf("Binary number = %d, Decimal number = %d\n", binary, dec);

	return 0;
}
