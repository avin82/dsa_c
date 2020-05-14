/* Program to solve tower of hanoi problem recursively */

#include <stdio.h>

void tower_of_hanoi(int n, char src, char dest, char aux);

int main(){
	int n;	// Number of disks
	printf("Enter the number of disks for tower of hanoi problem: ");
	scanf("%d", &n);
	tower_of_hanoi(n, 'A', 'C', 'B');	// A, B, and C are names of rods or towers

	return 0;
}

void tower_of_hanoi(int n, char src, char dest, char aux){
	if(n==1){
		printf("\nMove disk 1 from %c to %c", src, dest);
		return;
	}
	tower_of_hanoi(n-1, src, aux, dest);
	printf("\nMove disk %d from %c to %c", n, src, dest);
	tower_of_hanoi(n-1, aux, dest, src);
}
