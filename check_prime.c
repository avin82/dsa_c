// Program to check whether user inputted number is prime or not

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int i;
	printf("Enter a number: ");
	scanf("%d", &a);

	if (a < 2){
		printf("Not prime");
		exit(0);
	}
	
	if (a == 2){
		printf("Prime");
		exit(0);
	}

	for (i=2; i<a; i++){
		if (a%i == 0){
			printf("Not prime, divisible by %d", i);
			exit(0);
		}
	}

	printf("Prime");
}
