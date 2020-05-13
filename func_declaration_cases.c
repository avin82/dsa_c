/* Program to demonstrate special cases with function declaration */

#include <stdio.h>

int main(void){
	float f(int a);	// Function declaration within another function

	float f1 = f(10);
	printf("%f", f1);

	int i = g();	// Integer return type function not declared at all
	printf("\n%d\n", i);

	return 0;
}

float f(int a){
	return 1.0;
}

int g(){
	return 1;
}
