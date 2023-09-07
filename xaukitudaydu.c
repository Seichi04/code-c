#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(char a[51],int b[51],int i)
{
	int m=b[0];
	for(int k=1;k<i;k++)
	{
		if(a[k]<a[i]) if(b[k]>m) m=b[k];
	}
	return m;
}
int main()
{
	char a[51];
	gets(a);
	int dem=0,n=strlen(a);
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=1;
	}
	for(int i=1;i<n;i++)
	{
		b[i]+=max(a,b,i);
	}
	int m=b[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]>m) m=b[i];
	}
	printf("%d",26-m);
}