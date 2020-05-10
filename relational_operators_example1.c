/* Program to demonstrate relational operators in C */

#include <stdio.h>

int main(){
	int a=1, b=2, c=3;
	c=a==b;
	printf("%d\n", c);

	/* “==” is relational operator which returns only two values, either 0 or 1. 
		0: If a == b is false 
		1: If a == b is true 
		Since a=1 b=2 So, a == b is false hence C = 0. */
	
	return 0;
}
