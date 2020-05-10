/* Program to demonstrate the use of bitwise operators in C */

#include <stdio.h>

int main(){
	unsigned char a=6, b=10;

	printf("a&b=%d\n", a&b);	// The result is A
	printf("a|b=%d\n", a|b);	// The result is B
	printf("a^b=%d\n", a^b);	// The result is C
	printf("b<<1=%d\n", b<<1);	// The result is D
	printf("b>>1=%d\n", b>>1);	// The result is E
	
	/* 	6 = 0000 0110
		10 = 0000 1010

 		6 & 10 = 0000 0010 = 2
		6 | 10 = 0000 1110 = 14
		6 ^ 10 = 0000 1100 = 12
		10<<1 = 0001 0100 = 20
		10>>1 = 0000 0101 = 5
		A-2 B-14 C-12 D-20 E-5
	*/

	return 0;
}
