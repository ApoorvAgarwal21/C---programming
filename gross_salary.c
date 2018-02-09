// computation of gross salary of an employ based on da rate , basic and agp//
#include<stdio.h>
int main() {
float x, y, z, r;
	printf("enter the DA rate\n");
	scanf("%f", &x);
	printf("enter the basic\n");
	scanf("%f", &y);
	printf("enter the AGP\n");
	scanf("%f", &z);
r = y + z + (((y + z) * x)/100);
	printf("sum of three numbers is %f", r);
}