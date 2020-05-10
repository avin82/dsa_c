/* Program to display operator precedence and associativity in C */

#include <stdio.h>

int main(){
	int x=10;
	int a=1, b=2, c=3, d=4;
	x+=a=b*c+d-a;
	
	/*The expression b*c+d-a gets evaluated first, which then sets the value of a to 9. This value is used for incrementing x */

	printf("%d, %d", a, x);

	return 0;
}
