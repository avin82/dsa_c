/* Program that uses a function with no arguments and no return values */

#include <stdio.h>

void displaymenu();

int main(){
	int c;
	displaymenu();
	printf("Enter your choice: ");
	scanf("%d", &c);

	return 0;
}

void displaymenu(){
	printf("1. Create database\n");
	printf("2. Insert new record\n");
	printf("3. Modify a record\n");
	printf("4. Delete a record\n");
	printf("5. Display all records\n");
	printf("6. Exit\n");
}
