//computation of volume and surface area of sphere//
#include<stdio.h>
int main() {
float r, a, v;
	printf("enter the radius of sphere\n");
	scanf("%f", &r);
a = 4*3.14*r*r;
v = (4/3)*3.14*r*r*r;
	printf("area is %f\n", a);
	printf("volume is %f\n", v);
}