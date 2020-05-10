/* Program to demonstrate the sizeof operator in C */

#include <stdio.h>

int main(){
	int i=5, j=10, k=15;
	printf("%d ", sizeof(k/=i+j));
	printf("%d\n", k);

	/* The main theme of the program lies here: sizeof(k /= i + j). 
		An expression doesn’t get evaluated inside sizeof operator. 
		sizeof operator returns sizeof(int) because the result of expression will be an integer. 
		As the expression is not evaluated, value of k will not be changed. */
	
	return 0;
}
