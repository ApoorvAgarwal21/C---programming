//program to find square root of real or complex numbers (to compile this program write -lm after gcc example gcc squareroot.c -lm)
#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d,s,r1,r2,i,j;
    printf("enter the numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    d = ((b*b)-(4*a*c));
    if(d>=0)
    {
        s = sqrt(d);
        r1 = ((-b)+s)/(2*a);
        r2 = ((-b)-s)/(2*a);
        printf("the roots are %f and %f",r1,r2);
    }    
    else
    {   
        d = -d;
        s = sqrt(d);
        i = (-b)/(2*a);
        j = (s)/(2*a);
        printf("roots are %f+i%f and %f-i%f",i,j,i,j);
    }
}