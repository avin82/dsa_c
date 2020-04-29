// Program to find remainder of division of user inputted number by 3

#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if (a%3 == 0){
		printf("Remainder is 0");
	} else if (a%3 == 1){
		printf("Remainder is 1");
	} else{
		printf("Remainder is 2");
	}
}
