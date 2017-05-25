#include<stdio.h>
int main()
{
FILE *fp1,*fp2,*fp3;
char a[100],b[100];
fp1=fopen("usn.txt","r");
fp2=fopen("studentname.txt","r");
fp3=fopen("output.txt","w");
if(fp1==NULL)
{
printf("error in opening a file usn.txt\n");
return 1;
}
if(fp2==NULL)
{
printf("error in opening a file studenrname.txt\n");
return 0;
}
if(fp3==NULL)
{
printf("invalid\n");
return 2;
}
while(1)
{
fscanf(fp1,"%s",a);
fscanf(fp2,"%s",b);
if(feof(fp1)&&feof(fp2))
{
break;
}
else
{
fprintf(fp3,"%s\t %s\n",a,b);
}
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}


