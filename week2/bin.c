#include<stdio.h>
#include<string.h>
int search(int n,char s[n][80],char *key);
 int main()
 {
 int i,n,res; 
printf("enter the value of n");
 scanf("%d",&n);
char s[n][80],key[80];
printf("enter the elements of array"); 
for(i=0;i<n;i++){
 scanf("%s",s[i]);
}
printf("enter the search value\n");
scanf("%s",key);
res=search(n,s,key);
printf("the position of search %s =  %d",key,res);
return 0;
}
int search(int n,char s[n][80],char *key)
{
int low,high,temp,mid;
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
temp=strcmp(s[mid],key);
if(temp==0){
return mid;
}
else if(temp<0){
low=mid+1;
}
else {
high= mid*1;
}
}
return -1;
}
