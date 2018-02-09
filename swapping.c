//swapping of 2 integers//

#include<stdio.h>
int main() {
int a, b, c;
	printf("enter the value of a\n");
	scanf("%d", &a);
	printf("enter the value of b\n");
	scanf("%d", &b);
c = a;
a = b;
b = c;
	printf("the values of a and b are %d and %d", a, b);
}
