/* Program to demonstrate operator precedence and associativity */

#include <stdio.h>

int main(){
	int k;
	k=(1, 2, 3, 4, 5);
	printf("%d\n", k);

	/* Parenthesis has the highest precedence so the operations with in the parentheses is evaluated first. The comma operator has left-right associativity.
		The left operand is always evaluated first, and the result of  evaluation is discarded before the right operand is evaluated.
		Comma Operator returns rightmost operator i.e 5 */

	k=1, 2, 3, 4, 5;
	printf("%d\n", k);

	/* Comma Operator has lower precedence than Assignment operator.
		Value 1 is assigned first to variable 'k' and then comma operators will be evaluated. */

	return 0;
}
