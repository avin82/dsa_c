/* Program to demonstrate goto usage to in checking number for odd or even in C */

#include <stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n%2==0)
		goto even;
	else
		goto odd;
	even:
		printf("Number is even\n");
		goto end;
	odd:
		printf("Number is odd\n");
		goto end;
	end:
		printf("\n");
		return 0;
}
