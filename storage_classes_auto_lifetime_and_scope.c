/* Program to demonstrate storage class auto's lifetime and scope */

#include <stdio.h>

int main(void){
	int i=10;
	{
		int i=5;
		printf("\nInside block: %d", i);
	}

	printf("\nOutside block: %d\n", i);

	return 0;
}
