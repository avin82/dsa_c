/* Program to display logical or boolean operators */

#include <stdio.h>

int main(){
	int a=40, b=20;
	int c=20, d=30;
	if (a>b && a!=0)
		printf("&& Operator: Both conditions are true\n");
	if (c>d || d!=20)
		printf("|| Operator: Only one condition is true\n");
	if (!(a>b && a!=0))
		printf("! Operator: Both conditions are true\n");
	else
		printf("! Operator: Both conditions are true. But, status is inverted as false\n");

	if (a&&b)
		printf("\na && b");
	if (a && 0)
		printf("\na && 0");
	if (a || 0)
		printf("\na || 0");

	return 0;
}
