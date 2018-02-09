//program to find minimum number out of three given numbers//
#include<stdio.h>
int main() {
    int a,b,c,m;
    printf("enter the numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    m=a;
    else if(b<c)
    m=b;
    else
    m=c;
    printf("the minimum number is %d",m);
}