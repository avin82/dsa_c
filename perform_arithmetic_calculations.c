/* Program to demonstrate switch usage in C by performing arithmetic calculations on integers */

#include <stdio.h>

int main(){
	char op;
	int a, b;
	printf("Enter operator\n");
	scanf("%s", &op);
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	switch(op){
		case '+':
			printf("Result = %d\n", a+b);
			break;
		case '-':
			printf("Result = %d\n", a-b);
			break;
		case '*':
			printf("Result = %d\n", a*b);
			break;
		case '/':
			printf("Result = %d\n", a/b);
			break;
		case '%':
			printf("Result = %d\n", a%b);
			break;
		default:
			printf("Enter valid operator\n");
	}	/* End of switch */

	return 0;
}
