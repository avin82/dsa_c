// Program to display output formatting with integers in C

#include <stdio.h>

int main(){
	int a, b;
	printf("Enter values for two numbers a and b respectively: ");
	scanf("%d%d", &a, &b);

	/* Try value sets: a=12, b=14; a=12345, b=123456
		and verify output sets: a=  12,b= 14; a=12345,b=123456 respectively */

	printf("a=%4d, b=%3d\n", a, b);

	return 0;
}
