//value of y with x
#include<stdio.h>
int main() {
    int x,y;
    printf("input value of x\n");
    scanf("%d",&x);
    if(x<0)
    printf("y=1\n");
    else if(x>0)
    printf("y=-1\n");
    else
    printf("y=0\n");
}