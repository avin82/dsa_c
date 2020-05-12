/* Program to compute GCD of two numbers using Euclid's	Algorithm */

#include <stdio.h>

int main(){
	int x, y, m, n;
	printf("Enter two numbers for which the GCD needs to be found: ");
	scanf("%d%d", &x, &y);

	m=x;
	n=y;
	if(m==0 && n==0){
		printf("GCD = %d\n", n);
		goto end;
	} else if(m==0){
		printf("GCD = %d\n", n);
		goto end;
	} else if(n==0){
		printf("GCD = %d\n", m);
		goto end;
	}
	
	while(m!=n){
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}

	printf("GCD = %d\n", n);

	end:
		return 0;
}
