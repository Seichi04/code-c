#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j) goto label;
		}
		dem++;
		label: continue;
	}
	printf("%d\n",dem);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j) goto label1;
		}
		printf("%d ",a[i]);
		label1: continue;
	}
}