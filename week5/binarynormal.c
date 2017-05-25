#include<stdio.h>
#include<string.h>
int main()
{
	char c[100][100],key[100],temp[100];
	int n,first,last,mid;
	printf("enter the number of names\n");
	scanf("%d",&n);
	printf("enter %d names\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",c[i]);
	}
	for(int i=1;i<n;i++)
	{
	for(int j=0;j<n-i;j++)
	{
	if(strcmp(c[j],c[j+1])>0)
	{
	strcpy(temp,c[j]);
	strcpy(c[j],c[j+1]);
	strcpy(c[j+1],temp);
	}
	}
	}
	printf("the names after sorting is\n");
	for(int i=0;i<n;i++)
	{
	printf("%s\n",c[i]);
	}
	printf("the name to be searched is\n");
	scanf("%s",key);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(strcmp(c[mid],key)==0)
		{
			printf("the name found at position %d\n",mid+1);
			return 0;
		}	
		else if(strcmp(c[mid],key)>0)
		{	
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	printf("element not found");
	return 0;

}

