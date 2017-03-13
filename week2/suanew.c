
#include<stdio.h>
#include<math.h>
float sqroot(float n);
int main()
 {
 float s,n;
 printf("enter the value");
 scanf("%f",&n);
 s=sqroot(n);
 printf("square root of %f=%f",n,s);
 return 0;
}
float sqroot(float n)
 {
 float diff,a,b;
a=n/2;
b=n/a;
diff=fabs(a-b);
while(diff>0.000001)
{
a=(a+b)/2;
b=n/a;
diff=fabs(a-b);
}
return a;
}
