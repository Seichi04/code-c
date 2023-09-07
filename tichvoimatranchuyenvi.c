#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int m=0,n=0;scanf("%d %d",&m,&n);
		int a[m][n],b[n][m];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				b[j][i]=a[i][j];
			}
		}
		int c[m][m];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				c[i][j]=0;
				for(int h=0;h<n;h++)
				{
					c[i][j]=c[i][j]+a[i][h]*b[h][j];
				}
			}
		}
		printf("Test %d:\n",k+1);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	
}