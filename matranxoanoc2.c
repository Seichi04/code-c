#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n][n];
	for(int h=0;h<n;h++)
	{
		for(int k=0;k<n;k++)
		{
			a[h][k]=0;
		}
	}
	int x=1;
	int y=n*n;
	int i=0,j=0,v=0;
	while(x<=y)
	{
		while(a[i][j]==0 && j<n)
		{
			a[i][j]=x++;
			j++;
		}
		j--;
		i++;
		while(a[i][j]==0 && i<n)
		{
			a[i][j]=x++;
			i++;
		}
		i--;
		j--;
		while(a[i][j]==0 && j>=0)
		{
			a[i][j]=x++;
			j--;
		}
		j++;
		i--;
		while(a[i][j]==0 && i>=0)
		{
			a[i][j]=x++;
			i--;
		}
		i++;
		j++;
	}
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}