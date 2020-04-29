/* Program to display standard-input (scanf i.e. scan formatted)
	and standard-output (printf i.e. print formatted) capabilities */

#include <stdio.h>

int main(){
	char n[100];
	printf("What's your name? ");
	scanf("%s", n);

	printf("Hello %s\n", n);

	return 0;
}
