#include<stdio.h>
int main()
{
	int h=0;scanf("%d",&h);
	for(int k=0;k<h;k++)
	{
		int n=0,m=0;scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				a[i][j]=a[i+1][j];
			}
		}
		n-=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				a[i][j]=a[i][j+1];
			}
		}
		m-=1;
		printf("Test %d:\n",k+1);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	
}