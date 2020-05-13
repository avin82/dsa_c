/* Program to find the nth fibonacci number recursively 

Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... */

#include <stdio.h>

int fib(int num);

int main(){
	int num;
	printf("Enter the value of n to find the nth Fibonacci number: ");
	scanf("%d", &num);
	printf("The nth Fibonacci number where n=%d is %d\n", num, fib(num));

	return 0;
}

int fib(int num){
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	
	return fib(num-1) + fib(num-2);
}
