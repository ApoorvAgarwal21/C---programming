// computation of simple interest//
#include<stdio.h>
int main() {
float x, y, z, r;
	printf("enter the principle amount\n");
	scanf("%f", &x);
	printf("enter the interest rate\n");
	scanf("%f", &y);
	printf("enter the time period\n");
	scanf("%f", &z);
r = (x*y*z)/100;
	printf("sum of three numbers is %f", r);
}