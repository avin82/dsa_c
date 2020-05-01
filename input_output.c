// Program to display inputting and outputting capabilities in C language

#include <stdio.h>

int main(){
	char ch = 'a';
	char str[10] = "abcdef";
	float real = 12.34;
	int number = 100;
	double dbl = 12.345678;

	//	%d, %s, %c, %lf, %e, %o, %x

	printf("Character: %c\n", ch);
	printf("Character as integer: %d\n", ch);
	printf("String: %s\n", str);
	printf("Float: %f\n", real);

	printf("Double: %lf\n", dbl);
	printf("Scientific(e): %e\n", dbl);
	printf("Scientific(E): %E\n", dbl);

	printf("Integer: %d\n", number);
	printf("Octal: %o\n", number);
	printf("Hexadecimal: %x\n", number);

	printf("Hexadecimal: %x \t String: %s \t Float: %f\n", number, str, real);

	//	h: short => d, i, o, u, x
	//	l: large => f, e, g

	//	Refer: https://linux.die.net/man/3/printf	[Google: man page printf]

	//	scanf
	printf("\nEnter number, real, str: ");
	scanf("%d%f%s", &number, &real, str);
	printf("%d\t%f\t%s", number, real, str);

	int day, month, year, age;
	printf("\nEnter day-month-year:");
	scanf("%d-%d-%d", &day, &month, &year);	//	formatted input
	scanf("%d", &age);
	printf("%d/%d/%d", day, month, year);
	printf("\nage:%d", age);

	return 0;
}
