/* Program to compute x^y (i.e. x raised to power y) for positive integers x and y */

#include <stdio.h>

int calc_x_raised_to_power_y(int x, int y);

int main(){
	int x, y, res;
	printf("Enter two numbers x and y to compute x^y i.e. x raised to power y: ");
	scanf("%d%d", &x, &y);
	res=calc_x_raised_to_power_y(x, y);
	printf("%d^%d i.e. %d raised to power %d is %d\n", x, y, x, y, res);

	return 0;
}

int calc_x_raised_to_power_y(int x, int y){
	int res=1, a=x, b=y;
	while(b!=0){
		if(b%2==0){
			a=a*a;
			b=b/2;
		} else{
			res=res*a;
			b=b-1;
		}
	}

	return res;
}
