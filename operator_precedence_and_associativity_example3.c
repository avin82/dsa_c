/* Program to demonstrate operator precedence and associativity in C */

#include <stdio.h>

int main(){
	int x;
	x=5>8?10:1!=2<5?20:30;

	/* Output of exp1 is false, so exp3 (1 != 2 <5 ? 20 : 30) will be evaluated. In exp3, this is also form of ternary operator.
		1 != 2< 5 ? 20 : 30 (exp1 ? exp2 : exp3)
		Now, exp1 will be evaluated. According to operator precedence, 2<5 will be evaluated first (will give output 1). 
		Now, exp1 is like 1!=1 (condition is false). So, exp3 will be evaluated. Therefore, final output is 30. */


	printf("%d\n",x);

	return 0;
}
