/* Program to understand the use of register variable */

#include <stdio.h>

int main(){
	register int i;
	
	/* Register storage class can be applied only to local variables. The scope, lifetime and initial value of register
		variables are same as that of automatic variables. The only difference between the two is in the place
		where they are stored. Automatic variables are stored in memory while register variables are stored in
		CPU registers.*/	
	
	for(i=0; i<100; i++)
		printf("%d\n", i);

	return 0;
}
