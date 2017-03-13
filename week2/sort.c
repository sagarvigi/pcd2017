#include<stdio.h>
int sort(int a[10],int n);
int main()
{
int a[10],i,n,res;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
res=sort(a,n);
printf("the sorted elements are");
for(i=0;i<n;i++){
printf("%d",a[i]);
}
}
int sort(int a[10],int n)
{
int i,j,tem;
for(j=1;j<n;j++){
for(i=0;i<n-1;i++){
if(a[i]>=a[i+1])
{
tem=a[i];
a[i]=a[i+1];
a[i+1]=tem;
}
}
}
}

