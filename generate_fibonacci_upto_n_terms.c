/* Program to generate fibonacci series upto n terms

1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

In this series each number is a sum of the previous two numbers */

#include <stdio.h>

int main(){
	long x, y, z;
	int i, n;
	x=0;
	y=1;
	printf("Enter the number of terms for fibonacci series: ");
	scanf("%d", &n);
	printf("%ld ", y);
	for(i=1; i<n; i++){
		z=x+y;
		printf("%ld ", z);
		x=y;
		y=z;
	}

	printf("\n");

	return 0;
}
