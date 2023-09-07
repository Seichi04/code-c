#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;scanf("%d%d",&n,&m);
	int a[n][m],b[n*m];
	for(int i=0;i<n*m;i++)
	{
	scanf("%d",&b[i]);
	}
	int count=0;
	int round=1;
	int i=0,j=0;
	while(count+1<=n*m)
	{
		if(count+1==(n*m)) 
		{
			a[i][j]=b[count++];
			break;
		}
		for(j;j<m-round;j++) a[i][j]=b[count++];
		if(count+1==(n*m)) 
		{
			a[i][j]=b[count++];
			break;
		}
		for(i;i<n-round;i++) a[i][j]=b[count++];
		if(count+1==(n*m)) 
		{
			a[i][j]=b[count++];
			break;
		}
		for(j;j+1-round>0;j--) a[i][j]=b[count++];
		if(count+1==(n*m)) 
		{
			a[i][j]=b[count++];
			break;
		}
		for(i;i+1-round>0;i--) a[i][j]=b[count++];
		i++;
		j++;
		round++;
	}
	for(int k=0;k<n;k++)
	{
		for(int h=0;h<m;h++) printf("%3d ",a[k][h]);
		printf("\n");
	}
}