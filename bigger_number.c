/* Program to print the bigger number */

#include <stdio.h>

int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	if (a>b)
		printf("Bigger number=%d\n", a);
	else
		printf("Bigger number=%d\n", b);

	return 0;
}
