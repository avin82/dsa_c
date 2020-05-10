/* Program to demonstrate implicit type conversion in C */

#include <stdio.h>

int main(){
	char ch='a';
	int a=10;
	int b=a+ch;

	/* char will be converted to int(implicit conversion) before any operation and the result of the overall operation will be an int. 
		Since the integral value of ch is 97 (i.e ASCII value of the character 'a' ). Hence, 97 + 10 = 107 */

	printf("%d\n", b);

	return 0;
}
