#include<stdio.h>
#include<math.h>
float square(float n);
int main()
{
float n,s;
printf("enter the number");
scanf("%f",&n);
s=square(n);
printf("square root  of %f=%f",n,s);
return 0;
}	
float square(float n)
{
float s=sqrt(n);
return s;
}
