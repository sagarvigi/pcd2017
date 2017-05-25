#include<stdio.h>
int main()
{
int m,n,p,q,a[100][100],b[100][100],c[100][100];
while(1)
{
printf("enter size of A matrix\n");
scanf("%d%d",&m,&n);
printf("enter size of B matrix\n");
scanf("%d%d",&p,&q);
if(n==p)
break;
}
printf("enter matrix A");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter matrix B");
for(int j=0;j<q;j++)
{
for(int i=0;i<p;i++)
{
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<q;j++)
{
c[i][j]=0;
for(int k=0;k<n;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("the matrix C \n");
for(int i=0;i<m;i++)
{
for(int j=0;j<q;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
return 0;
}
