#include<stdio.h>
struct complex
{
float real;
float img;
};
struct complex add(struct complex 
a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
int main()
{
struct complex a,b,c;
printf("Enter the  real value of a=");
scanf("%f",&a.real);
printf("Enter img value of a=");
scanf("%f",&a.img);
printf("Enter the real value of b=");
scanf("%f",&b.real);
printf("Enter the img value of b=");
scanf("%f",&b.img);
c=add(a,b);
printf("sum of two complex numbers = %f+i %f\n",c.real,c.img);
}

