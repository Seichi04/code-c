#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int max=1;
		for(int i=0;i<n;i++)
		{
			int dem=1;
			for(int j=0;j<i;j++)
			{
				if(a[j]==a[i]) dem++;
			}
			b[i]=dem;
			if(dem>max) max=dem;
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]==max) printf("%d ",a[i]);
		}
		printf("\n");
	}
}