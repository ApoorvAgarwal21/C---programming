//program using ascii codes
#include<stdio.h>
int main() {
    char a,b,x;
    printf("enter input\n");
    scanf("%c",&a);
    if(a<=57 && a>=48)
    printf("it is an integer\n");
    else if(a<=122 && a>=97)
    {
        b = a - 32;
        printf("it is character %c\n",b);
    }
    else if(a<=90 && a>=65)
    {x = a;
    printf("it is %c\n",x);}
    else
    printf("it is special character %d\n",a);
}