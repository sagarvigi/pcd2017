#include<stdio.h>
#include<string.h>
int search( int n, char s[n][80], char *key);
int main()
{
int i,n,res;
char s[n][80],key[80];
printf("enter the value of n");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%s",s[i]);
}
printf("enter the search value");
scanf("%s",key);
res=search(n,s,key);
printf("the search value is %d\n",res);
return 0;
}
int search(int n,char s[n][80],char *key)
{
	char low,high,mid,tem;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		tem=strcmp(s[mid],key);
		if(tem==0)
		{
			printf("string found at position %d",mid);
		
			return mid;
			}
		
		else if(tem<0)
		{
				low=mid+1;	
		}	
		else{
			high=mid-1;
		
		}
	}
	return -1;
}
