// Program to display input formatting with strings in C

#include <stdio.h>

int main(){
	char str[10];
	printf("Enter a string: ");
	scanf("%3s", str);

	/* Try value str="abcdef" and verify output "abc" */

	printf("%s\n", str);

	return 0;
}
