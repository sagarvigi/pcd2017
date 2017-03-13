#include<stdio.h>
int compute(int key,int a[10],int n);
int main()
{
int i,key,a[10],n,res;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the value to search");
scanf("%d",&key);
res=compute(key,a,n);
printf("the position of %d=%d",key,res);
}
int compute(int key,int a[10],int n)
{
int i;
for(i=0;i<n;i++){
         if(key==a[i])
return i;
}
return -1;
}
