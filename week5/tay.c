#include<stdio.h>
#include<math.h>
int main()
{
float degree,sum,term,x;
printf("enter the degree\n");
scanf("%f",&degree);
x=(3.1412/180)*degree;
term=x;
sum=term;
for(int i=3;fabs(term)>0.0000001;i=i+2)
{
term=-((term*x*x)/(i*(i-1)));
sum=sum+term;
}
printf("sin(%f)=%f\n",degree,sum);
return 0;
}
