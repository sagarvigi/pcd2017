#include<stdio.h>
int getdata(int z[10][10],int m,int n)
{
int i,j;
printf("enter the elements of matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++){
scanf("%d",&z[i][j]);
}
}
return z[i][j];
}
int multiply(int a[10][10],int b[10][10],int c[10][10],int m,int n,int p,int q)
{
int i,j,k,sum;
for(i=0;i<m;i++){
for(j=0;j<q;j++){
sum=0;
for(k=0;k<n;k++){
sum=sum+a[i][k]*b[k][j];
}
c[i][j]= sum;
}
}
return c[i][j];
}
int print(int z[10][10],int m,int n)
{
int i,j;
printf("the product of matrix is");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",z[i][j]);
printf("\n");
}
}
return z[i][j];
}
int main()
{
int a[10][10],b[10][10],c[10][10],m,n,p,q;
printf("enter the order of matrix A");
scanf("%d%d",&m,&n);
printf("enter the elements of matrix A");
getdata(a,m,n);
printf("enter the order of matrix B");
scanf("%d%d",&p,&q);
printf("enter the elements of matrix B");
getdata(b,p,q);
multiply(a,b,c,m,n,p,q);
printf("the product of matrix");
print(c,m,q);
return 0;
}

