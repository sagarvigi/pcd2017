#include<stdio.h>
#include<math.h>
float convert(float degree);
float compute(float x);
int main()
{
float degree,x,sum;
printf("enter the degree");
scanf("%f",&degree);
x=convert(degree);
sum=compute(x);
printf("sin(%f)=%f",degree,sum);
return 0;
}
float convert(float degree)
{
float r=(3.1412/180)*degree;
return r;
}
float compute(float x)
{
float sum,prev,diff,term;
int i;
sum=diff=term=x;
for(i=3;diff>0.000001;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
