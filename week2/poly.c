#include<stdio.h>
int main()
{
int i,order;
float a[20],x,sum;
printf("enter the order");
scanf("%d",&order);
printf("enter %d coefficient of polynomial ,starting with lowest order coefficient",(order+1));
for(i=0;i<=order;i++)
{
scanf("%f",a[i]);
}
printf ( "Enter the value of x:"); 
scanf("%f",&x); 
} 
sum=a[order]; 
for(i=order-1;i>=0;i--)
{ 
sum=(sum*x)+a[i];
printf ( "\nThe value of polynomial f(%f): %f\n\n",x,sum); 
return 0; 
}
