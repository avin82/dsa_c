// Program to check user inputted number for odd or even

#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);

	if (a%2 == 0){
		printf("Even");
	} else{
		printf("Odd");
	}
}
