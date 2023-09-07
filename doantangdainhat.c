#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n],dem[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			dem[i]=1;
		}
		int max=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1]) dem[i]=dem[i-1]+1;
			if(dem[i]>max) max=dem[i];
		}
		printf("Test %d:\n%d\n",k+1,max);
		for(int i=0;i<n;i++)
		{
			if(dem[i]==max)
			{
				for(int j=i-max+1;j<=i;j++)
				{
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
	}
	
	
}