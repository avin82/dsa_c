/* Program to understand automatic variables */

#include <stdio.h>

void func(){
	int x=2, y=5;
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
