//to take input from user of the operation to be performed using switch case
#include<stdio.h>
#include<math.h>
int main() {
    char o;
    int x,y;
    float z;
    printf("enter the operator(+,-,*,/,s)\n");
    scanf("%c",&o);
    printf("enter the numbers\n");
    scanf("%d %d",&x,&y);
    switch(o)
    {
    case '+':
    {
        z = x + y;
        break;
    }
    case '-':
    {
        z = x - y;
        break;
    }
    case '*':
    {
        z = x * y;
        break;
    }
    case '/':
    {
        z = x / y;
        break;
    }
    case 's':
    {
        z = sqrt(x*y);
        break;
    }
    default:
    {
        printf("error");
    }
    }
    printf("%f",z);
}