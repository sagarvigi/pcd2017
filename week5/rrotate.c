#include<stdio.h>
#include<math.h>
unsigned int rightshift(unsigned int x, unsigned int n)
{
for(int i=1;i<=n;i++)
{
if(x%2==0)
{
x=x>>1;
}
else
{
x=x>>1;
x=x+(1<<31);
}
}
return x;
}
int main()
{
unsigned int x,n,r;
printf("enter the value of x");
scanf("%u",&x);
printf("enter how many times to rotate");
scanf("%u",&n);
r=rightshift(x,n);
printf("the value of x after rotation is %u",r);
return 0;
}
