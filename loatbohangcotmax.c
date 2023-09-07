#include<stdio.h>

int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		
		int m=0,n=0;scanf("%d %d",&m,&n);
		int a[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int hmax=0;
		int hangmax=0;
		for(int i=0;i<m;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=a[i][j];
			}
			if(sum>hmax)
			{
				hmax=sum;
				hangmax=i;
			}
		}
		m--;
		for(int j=0;j<n;j++)
		{
			for(int i=hangmax;i<m;i++)
			{
				a[i][j]=a[i+1][j];
			}
		}
		int cmax=0;
		int cotmax=0;
		for(int j=0;j<n;j++)
		{
			int sum=0;
			for(int i=0;i<m;i++)
			{
				sum+=a[i][j];
			}
			if(sum>cmax)
			{
				cmax=sum;
				cotmax=j;
			}
		}
		n--;
		for(int i=0;i<m;i++)
		{
			for(int j=cotmax;j<n;j++)
			{
				a[i][j]=a[i][j+1];
			}
		}
		printf("Test %d:\n",k+1);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	
}