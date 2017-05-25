#include<stdio.h>
struct complex
{
float real;
float img;
};
struct complex getcomplex()
{
struct complex c;
printf("enter real and imaginary value\n");
scanf("%f%f",&c.real,&c.img);
return c;
}
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
void printcomplex(struct complex c)
{
printf("%f+i%f\n",c.real,c.img);
}
int main()
{
struct complex a,b,c;
a=getcomplex();
b=getcomplex();
c=add(a,b);
printcomplex(c);
return 0;
}
