/* Program that uses a function with arguments but without return value */

#include <stdio.h>
#include <math.h>

void type(float a, float b, float c);
void area(float a, float b, float c);

int main(){
	float x, y, z;
	printf("Enter the sides of triangle: ");
	scanf("%f%f%f", &x, &y, &z);
	if(x<y+z && y<z+x && z<x+y){
		type(x, y, z);
		area(x, y, z);
	} else
		printf("No triangle possible with these sides\n");
	
	return 0;
}

void type(float a, float b, float c){
	if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b))
		printf("Right angled triangle\n");
	else if(a==b && b==c)
		printf("Equilateral triangle\n");
	else if(a==b || b==c || c==a)
		printf("Isosceles triangle\n");
	else
		printf("Scalene triangle\n");
}

void area(float a, float b, float c){
	float s, area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle=%f\n", area);
}
