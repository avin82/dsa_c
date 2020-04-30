#include <stdio.h>

int is_prime(int a){
	if (a < 2){
		return(0);
	} else if (a == 2){
		return 1;
	}

	int i;

	for (i=2; i<a; i++){
		if (a%i == 0){
			return(0);
		}
	}

	return 1;
}

int main(){
	int a;
	int a_p;
	
	printf("Enter a number: ");
	scanf("%d", &a);

	a_p = is_prime(a);
	if (a_p == 1){
		printf("%d is prime\n", a);
	} else {
		printf("%d is not a prime\n", a);
	}

	printf("Enter another number: ");
	scanf("%d", &a);

	a_p = is_prime(a);
	if (a_p == 1){
		printf("%d is prime\n", a);
	} else {
		printf("%d is not a prime\n", a);
	}
}
