//computation of area and circumference of circle//
#include<stdio.h>
int main() {
float r, a, c;
	printf("enter the radius of circle\n");
	scanf("%f", &r);
a = 3.14*r*r;
c = 2*3.14*r;
	printf("area is %f\n", a);
	printf("circumference is %f\n", c);
}