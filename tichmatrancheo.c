#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n][n],b[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j==0) a[i][j]=1;
				else if(j!=0 && j<=i) a[i][j]=a[i][j-1]+1;
				else a[i][j]=0;
				b[j][i]=a[i][j]; 
			}
		}
		int c[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				c[i][j]=0;
				for(int h=0;h<n;h++)
				{
					c[i][j]=c[i][j]+a[i][h]*b[h][j];
				}
			}
		}
		printf("Test %d:\n",k+1);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	
	
}
