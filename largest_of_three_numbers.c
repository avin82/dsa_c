/* Program to find largest of three numbers
	using nested conditional (or ternary) operators */

#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter values for three numbers a, b and c respectively: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Largest number is %d\n", (a>b?(a>c?a:c):(b>c?b:c)));

	return 0;
}
