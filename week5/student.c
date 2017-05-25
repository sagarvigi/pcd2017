#include<stdio.h>
#include<string.h>
struct student
{
char name[100];
int id_no;
float mark;
char grade[10];
};
int main()
{
char key[100];
int i,n;
printf("enter the value of n\n");
scanf("%d",&n);
struct student s[n];
for(i=0;i<2;i++)
{
printf("enter the name\n");
scanf("%s",s[i].name);
printf("enter the id_no is\n");
scanf("%d",&s[i].id_no);
printf("enter the marks\n");
scanf("%f",&s[i].mark);
printf("enter the grade\n");
scanf("%s",s[i].grade);
}
printf("enter the key\n");
scanf("%s",key);
for(i=0;i<2;i++)
{
if(strcmp(key,s[i].name)==0)
{
printf("marks of student is %f:",s[i].mark);
return 0;
}
}
printf("name not found\n");
return 0;
}

