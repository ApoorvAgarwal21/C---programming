//conversion of temperature to farhenite//
#include<stdio.h>
int main() {
float c, f;
	printf("enter the temperature in centigrate\n");
	scanf("%f", &c);
f = (1.8*c) + 32;
	printf("temperature in farhenite is %f", f);
}