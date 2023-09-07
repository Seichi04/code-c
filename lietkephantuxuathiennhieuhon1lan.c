#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[n],c=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j] && j<i) goto label;
			if(a[i]==a[j]) dem++;
		}
		if(dem>1) 
		{
			b[c++]=a[i];
		}
		label: continue;
	}
	printf("%d\n",c);
	for(int i=0;i<c;i++)
	{
		printf("%d ",b[i]);
	}
	
}