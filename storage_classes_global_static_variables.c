/* Program to understand global static variables in C */

#include <stdio.h>

static int y=5;

void func(){
	int x=2;
	printf("x=%d, y=%d\n", x, y);
	x++;
	y++;
}

int main(){
	func();
	func();
	func();

	return 0;
}
