#include<stdio.h>
#include<math.h>
int isrev(int n);
 int main()
 {
 int n,a; 
printf("enter the value"); 
scanf("%d",&n);
 a=isrev(n);
 printf("the reverse of the number is %d",a);\
 return 0;
}
int isrev(int n)
 {
 int r=0,rev; 
while(n!=0)
 {
 rev=n%10;
 r=r*10+rev; 
n=n/10;
}
return r;
}

