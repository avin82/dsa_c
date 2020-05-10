/* Program to demonstrate operator precedence and associativity in C */

#include <stdio.h>

int main(){
	static int a[10];
	int i=0;
	a[i]=++i;
	printf("%d %d %d\n", a[0], a[1], a[2]);

	/* a[i]=++i; is equivalent to
		i=i+1;
		a[i]=i;
		i is pre-incremented by 1, So the expression becomes a[1]=1 ;
		Output will be : 0 1 0 */

	return 0;
}
