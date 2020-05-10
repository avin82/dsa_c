/* Program to demonstrate operator precedence and associativiy in C */

#include <stdio.h>

int main(){
	printf("%d\n", 1<<2+3<<4);

	/* The main logic behind the program is the precedence and associativity of the operators.
		The addition(+) operator has higher precedence than shift(<<) operator. 
		So, the expression boils down to 1 << (2 + 3) << 4 which in turn reduces to (1 << 5) << 4 as the shift operator has left-to-right associativity. */

	return 0;
}
