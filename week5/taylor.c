#include<stdio.h>
#include<math.h>
float converting(float degree);
float computing(float x);
int main()
{
float degree,x,sum;
printf("enter the degree");
scanf("%f",&degree);
x=converting(degree);
sum=computing(x);
printf("sin(%f) =%f",degree,sum);
}
float converting(float degree)
{
float rad=(3.1412/180)*degree;
return rad;
}
float computing(float x)
{
float sum,diff,pre,term;
int i;
sum=diff=term=x;
for(i=3;diff>0.000001;i=i+2)
{
pre=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(pre-term);
sum=sum+term;
}
return sum;
}
