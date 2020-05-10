/* Program to demonstrate the short circuit property of logical operators in an expression in C */

#include <stdio.h>

int main(){
	int a;
	int b=5;
	a=0&&--b;
	printf("%d %d\n", a, b);

	/* In the logical AND operator, if any of the condition is false then the whole result is false. 
		Here 0 acts as a false value in c therefore the whole result is false and --b is not executed. Therefore the result is 0 5. */

	return 0;
}
