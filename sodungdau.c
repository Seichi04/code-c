#include<stdio.h>
int main()
{
	int m=0;scanf("%d",&m);
	for(int h=0;h<m;h++)
	{
		int n=0;scanf("%d",&n);
		long a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>=a[i]) goto label;
			}
			printf("%ld ",a[i]);
			label: continue;
		}
		printf("\n");
	}
	
}