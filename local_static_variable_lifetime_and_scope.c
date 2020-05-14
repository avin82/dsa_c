/* Program to demonstrate the lifetime and scope of local static variables in C */

#include <stdio.h>

void func(){
	static int x=2, y=5;
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
