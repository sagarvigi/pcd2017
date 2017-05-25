#include<stdio.h>
int palan(int n);
int main()
{
int n,r;
printf("enter the number");
scanf("%d",&n);
r=palan(n);
if(r==n)
printf("is a palindrome");
else
printf("is not a palindrome");
return 0;
}
int palan(int n)
{
int r=0,x;
while(n>0){
x=n%10;
r=(r*10)+x;
n=n/10;
}
return r;
}
