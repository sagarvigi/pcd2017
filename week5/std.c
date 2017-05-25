#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
float a[100],mean,sum=0,var,v=0,std=0;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%f",(a+i));
}
for(i=0;i<n;i++)
{
sum=sum+(*(a+i));
}
mean=sum/n;
for(i=0;i<n;i++)
{
v=v+pow(((*(a+i))-mean),2);
}
var=v/n;
std=sqrt(var);
printf("sum:%f\nmean=%f\nvariance=%f\nstandard deviation=%f",sum,mean,var,std);
return 0;
}

