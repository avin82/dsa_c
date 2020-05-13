/* Program that uses a function with return value and without arguments */

#include <stdio.h>

int func(void);

int main(){
	printf("%d\n", func());

	return 0;
}

/* Returns the sum of squares of all odd numbers from 1 to 10 */

int func(void){
	int i, s=0;
	for(i=1; i<=10; i++){
		if(i%2!=0)
			s+=i*i;
	}

	return s;
}
