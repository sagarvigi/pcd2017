#include<stdio.h>
int isleap(int year)
{
if(year%400==0){
return 0;
}
else if(year%100==0){
return 1;}
else if (year%4==0){
return 2;
}
else{
return -1;
}
}
int main()
{
int year,r;
printf("enter the year");
scanf("%d",&year);
r=isleap(year);
switch(r){
case -1:
printf("is not a leap year");
break;
case 0:
printf("is a quadranal leap year");
break;
case 1:
printf("is a centurial but not a leap year");
break;
case 2:
printf("is a leap year");
break;
default:
break;
}
return 0;
}
