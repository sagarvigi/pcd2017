#include<stdio.h>
int main()
{
   int n,a[80],temp;
   printf("enter size of array\n");
   scanf("%d",&n);
  printf("enter array elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=1;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("the array elements after sorting\n");
for(int i=0;i<n;i++)
{
printf(" %d",a[i]);
}
return 0;
}
