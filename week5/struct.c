#include<stdio.h>
struct student
{
char n[100];
int r;
float m;
};
int main()
{
int n,temp;
printf("enter number of students\n");
scanf("%d",&n);
struct student s[n];
for(int i=0;i<n;i++)
{
printf("enter details of student-%d\n",i);
printf("enter the name\n");
scanf("%s",s[i].n);
printf("enter roll no\n");
scanf("%d",&s[i].r);
printf("enter marks\n");
scanf("%f",&s[i].m);
}
for(int i=1;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(s[j].m<s[j+1].m)
{
temp=s[j].m;
s[j].m=s[j+1].m;
s[j+1].m=temp;
}
}
}
printf("record after sorting\n");
for(int i=0;i<n;i++)
{
printf("the details of student-%d\n",i);
printf("name=%s\n",s[i].n);
printf("roll no=%d\n",s[i].r);
printf("marks=%f\n",s[i].m);
}
return 0;
}
