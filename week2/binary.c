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
int low,high,mid;
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])return mid;
if(key<a[mid])return high=mid-1;
if(key>a[mid])return low=mid+1;
}
return -1;
}
