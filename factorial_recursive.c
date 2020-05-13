/* Program to find factorial of any given number recursively */

#include <stdio.h>

int fact_recursive(int num);

int main(){
	int num;
	printf("Enter the number for which you want to find the factorial value: ");
	scanf("%d", &num);
	printf("Factorial of %d is %d\n", num, fact_recursive(num));

	return 0;
}

int fact_recursive(int num){
	if(num==0)
		return 1;

	return num*fact_recursive(num-1);
}
