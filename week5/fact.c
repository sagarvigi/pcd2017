#include<stdio.h>
int fact(int n);
int main()
{
int s,n,r,a,b;
printf("enter the number\n");
scanf("%d",&n);
r=fact(n);
printf("the factorial of %d is %d",n,r);
printf("enter the n and r\n");
scanf("%d%d",&a,&b);
if(b>a)
{
printf("invalid input\n");
}
else
{
s=fact(a)/(fact(b)*fact(a-b));
printf("binomial coefficient is %d",s);
}
return 0;
}
int fact(int n)
{
int s;
if(n==0)
{
return 1;
}
else
{
s=n*fact(n-1);
}
return s;
}
