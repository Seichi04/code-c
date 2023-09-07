#include<stdio.h>
int main()
{
	int n,m;scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=0;
		}
	}
	int num=1;
	int round=1;
	int i=0,j=0;
	while(num<=n*m)
	{
		if(num==n*m){ a[i][j]=num; break;}
		for(j;j<m-round;j++) a[i][j]=num++;
		if(num==n*m){ a[i][j]=num; break;}
		for(i;i<n-round;i++) a[i][j]=num++;
		if(num==n*m){ a[i][j]=num; break;}
		for(j;j+1-round>0;j--) a[i][j]=num++;
		if(num==n*m){ a[i][j]=num; break;}
		for(i;i+1-round>0;i--) a[i][j]=num++;
		i++;j++;round++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%5d ",a[i][j]);
		}
		printf("\n");
	}
}