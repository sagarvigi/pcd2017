#include<stdio.h> 
int main() 
{ 
int order, i; 
	float a[15],x,sum; 
 printf ("Enter the order of polynomial:");
 scanf("%d",&order); 
printf("Enter %d co-efficients of polynomial, starting with lowest order coefficient first:\n", (order+1) ); 
for ( i = 0 ; i <= order ; i++ ) 
{ 
scanf("%f",&a[i]); 
} 
printf("Enter the value of x:"); 
scanf("%f",&x);
sum=a[order]; 
for (i=order-1;i>=0;i--) 
{ 

sum=(sum*x)+a[i]; 
} 
printf("the value of polynomial of %f=%f",x,sum);
return 0;
}
