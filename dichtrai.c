#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int p=0;scanf("%d",&p);
	int b[p];
	for(int i=0;i<p;i++)
	{
		b[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i<n-p) a[i]=a[i+p];
		else a[i]=b[i-(n-p)];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}