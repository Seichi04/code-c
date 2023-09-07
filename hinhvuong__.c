#include<stdio.h>
#include<math.h>
int main()
{
	int m=0;scanf("%d",&m);
	int n=2*m-1;
	int a[n][n];
	int x=0;
	while(x<=m)
	{
		for(int i=x;i<n-x;i++)
		{
			for(int j=x;j<n-x;j++)
			{
				if(i==x||j==x||i==n-1-x||j==n-1-x) a[i][j]=m-x;
			}
		}
		x++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}