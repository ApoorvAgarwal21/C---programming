//value of y wrto x using conditional statement
#include<stdio.h>
int main() {
    int x,y;
    printf("input the value of x\n");
    scanf("%d",&x);
    printf("%d\n",y=(x<0?1:x>0?-1:0));
}