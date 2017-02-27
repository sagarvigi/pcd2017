#include<stdio.h>
struct complex
{
float real;
float img;
};
struct complex getdata()
{
struct complex c;
printf("enter real and imaginary");
scanf("%f%f",&c.real,&c.img);
return c;
}
struct complex add(struct complex 
a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
void printdata(struct complex c)
{
printf("%f+i%f",c.real,c.img);
}
int main()
{
struct complex a,b,c;
a=getdata();
b=getdata();
c=add(a,b);
printdata(c);
}

