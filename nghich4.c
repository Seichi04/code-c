#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num=1;
	int n;scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) a[i][j]=0;
	}
	int round=1;
	int i=0,j=0;
	while(num<=(n*n))
	{
		for(j;j<n-round;j++) a[i][j]=num++;
		for(i;i<n-round;i++) a[i][j]=num++;
		for(j;j+1-round>0;j--) a[i][j]=num++;
		for(i;i+1-round>0;i--) a[i][j]=num++;
		i++;
		j++;
		round+=1;
		
		
	}
		for(int k=0;k<n;k++)
		{
			for(int h=0;h<n;h++) printf("%3d ",a[k][h]);
			printf("\n");
		}
		printf("%d %d %d\n",i,j,round);
}