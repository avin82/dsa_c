/* Program to demonstrate operator precedence and associativity in C */

#include <stdio.h>

int main(){
	int m, i=0, j=1, k=2;
	m=i++||j++||k++;
	printf("%d%d%d%d\n", m, i, j, k);
	
	/* In an expression involving || operator, evaluation takes place from left to right and will be stopped if one of its components evaluates to true(a non zero value).
		So in the given expression m = i++ || j++ || k++.
		It will be stop at j and assign the current value of j in m.
		Therefore m = 1, i = 1, j = 2 and k = 2 (since k++ will not encounter. so its value remain 2) */

	return 0;
}
