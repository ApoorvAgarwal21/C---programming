#include<stdio.h>
int main()
{
    int d;                                                                     // d is used to define the cateogory
    printf("Enter 1 for Apparels\n");
    printf("Enter 2 for Food\n");
    printf("Enter 3 for Electronic appliances & gadgets\n");
    scanf("%d",&d);
    if (d==1)
    {
        printf("Tax invoice for apparels\n");
        float a[100],k[100],h[100],b,c,t;
        int i,n,x=0;
        char u[500];
        printf("Name :- ");
        scanf("%s",u);
        printf("number of enteries -------------------- ");
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            printf("%d.) ----------------------------------- ",i+1);
            scanf("%s",u);
            scanf("%fx%f",&a[i],&k[i]);                                                                     // price in the form 2x360 and then enter.
            h[i] = a[i]*k[i];
            printf("                                                      %.3f\n",h[i]);
        }
        for(i=0;i<n;i++)
        {
            x = x + h[i];
        }
        b = x * 0.025;
        c = x * 0.025;
        printf("\n");
        printf("------------------------------------------------------------------------------\n");
        printf("cgst(2.5 percent) ----------------------------------- %.3f\n",b);
        printf("sgst(2.5 percent) ----------------------------------- %.3f\n",c);
        printf("\n");
        t = x + b + c;
        printf("------------------------------------------------------------------------------\n");
        printf("total amount  --------------------------------------- %.3f\n",t);
    }
    if (d==2)
    {
        printf("Tax invoice for Food items\n");
        float a[100],k[100],h[100],b,c,t;
        int i,n,x=0;
        char u[500];
        printf("number of enteries -------------------- ");
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            printf("%d.) Item -------------------- ",i+1);                                          // here just type name and then space ad then price.
            scanf("%s",u);
            scanf("%fx%f",&a[i],&k[i]);
            h[i] = a[i]*k[i];
            printf("                                                      %.3f\n",h[i]);
        }
        for(i=0;i<n;i++)
        {
            x = x + h[i];
        }
        b = x * 0.025;
        c = x * 0.025;
        printf("\n");
        printf("------------------------------------------------------------------------------\n");
        printf("cgst(2.5 percent) ----------------------------------- %.3f\n",b);
        printf("sgst(2.5 percent) ----------------------------------- %.3f\n",c);
        printf("\n");
        t = x + b + c;
        printf("------------------------------------------------------------------------------\n");
        printf("total amount  --------------------------------------- %.3f\n",t);
    }
    if (d==3)
    {
        printf("Tax invoice for Electronic appliances & gadgets\n");
        float a[100],k[100],h[100],b,c,t;
        int i,n,x=0;
        char u[500];
        printf("Name:- ");
        scanf("%s",u);
        printf("number of enteries -------------------- ");
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            printf("%d.) Item -------------------- ",i+1);                                          // here just type name and then space ad then price.
            scanf("%s",u);
            scanf("%fx%f",&a[i],&k[i]);
            h[i] = a[i]*k[i];
            printf("                                                      %.3f\n",h[i]);
        }
        for(i=0;i<n;i++)
        {
            x = x + h[i];
        }
        b = x * 0.09;
        c = x * 0.09;
        printf("\n");
        printf("------------------------------------------------------------------------------\n");
        printf("cgst(9.0 percent) ----------------------------------- %.3f\n",b);
        printf("sgst(9.0 percent) ----------------------------------- %.3f\n",c);
        printf("\n");
        t = x + b + c;
        printf("------------------------------------------------------------------------------\n");
        printf("total amount  --------------------------------------- %.3f\n",t);
    }
}