#include<stdio.h>
float poly(float x,int order,float a[15]);
int main()
{
int i,order;
float a[15],x,r,sum;
printf("enter the order");
scanf("%d",&order);
printf("enter %d coefficients of a polynomial starting from lowest order",(order+1));
for(i=0;i<=order;i++)
{
scanf("%f",&a[i]);
}
printf("enter the value of x");
scanf("%f",&x);
r=poly(x,order,a);
printf("value of polynomial of %f=%f",x,r);
return 0;
}
float poly(float x,int order,float a[15])

{
float sum;
int i;
sum=a[order];
for(i=order-1;i>=0;i--)
{
sum=(sum+a[i])*x;
}
return sum;
}
