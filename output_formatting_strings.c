// Program to display output formatting with strings in C

#include <stdio.h>

int main(){
	printf("%3s\n", "abcdef");
	printf("%5s\n", "ab");
	printf("%.3s\n", "abcdef");
	printf("%8.3s\n", "abcdef");

	return 0;
}
