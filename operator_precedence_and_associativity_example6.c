/* Program to demonstrate operator precedence and associativity in C */

#include <stdio.h>

int main(){
	int a, b;
	a=3,1;
	b=(5,4);
	printf("%d\n", a+b);

	/* , can also be used as an operator and it has the least precedence.
		So in the first statement assignment is done first. a=3
		In the second, assignment done later. Comma operator has to left right associativity b=4 */

	return 0;
}
