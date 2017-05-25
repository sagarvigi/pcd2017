#include<stdio.h>
int isprime(int n);
int main()
{
int n,n1,s,n2,r,i;
printf("enter the number\n");
scanf("%d",&n);
r=isprime(n);
if(r==0)
{
printf("\n%d is not a prime number",n);
}
else
{
printf("\n%d is a prime number",n);
}
printf("\nenter the range number\n");
scanf("%d%d",&n1,&n2);
printf("\nthe prime number between %d and %d:",n1,n2);
if(n1>n2)
printf("invalid input\n");
else
{
for(i=n1+1;i<n2;i++)
{
s=isprime(i);
if(s==1)
printf("%d\t",i);
}
}
return 0;
}
int isprime(int n)
{
int i;
for(i=2;i<n;i++)
{
if(n%i==0)
return 0;
}
return 1;
}
