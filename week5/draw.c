#include<stdio.h>
struct rectangle
{
float length;
float breadth;
};
struct rectangle getdata()
{
struct rectangle r;
printf("enter the length and breadth");
scanf("%f%f",&r.length,&r.breadth);
return r;
}
struct rectangle drawrec(struct rectangle r)
{
for(int i=0;i<r.length;i++)
{
printf("*");
}
printf("\n");
for(int j=0;j<r.breadth-2;j++)
{
printf("*");
for(int i=0;i<r.length-2;i++)
{
printf(" ");
}
printf("*\n");
}
for(int i=0;i<r.length;i++)
{
printf("*");
}
}
int main()
{
struct rectangle r;
r=getdata();
drawrec(r);
}
