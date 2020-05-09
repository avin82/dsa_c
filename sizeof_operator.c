/* Program to display sizeof operator in C */

#include <stdio.h>

int main(){
	printf("Number of bytes to store an integer value on this machine: %d\n", sizeof(int));
	printf("Number of bytes to store a float value on this machine: %d\n", sizeof(float));
	printf("Number of bytes to store a character value on this machine: %d\n", sizeof(char));

	return 0;
}
