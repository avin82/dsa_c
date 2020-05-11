/* Program to find the sum and average of 5 positive integers */

#include <stdio.h>

int main(){
	int i=1, num, sum=0;
	float avg;
	printf("Enter 5 positive numbers: ");
	while(i<=5){
		printf("Enter number %d: ", i);
		scanf("%d", &num);
		if(num<0){
			printf("Enter only positive numbers\n");
			continue;
		}

		sum+=num;
		i++;
	}

	avg=sum/5.0;
	printf("Sum=%d	Average=%f\n", sum, avg);

	return 0;
}
