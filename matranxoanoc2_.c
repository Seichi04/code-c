#include<stdio.h>
int main()
{
	int t;scanf("%d",&t);
	while(t--)
	{
		int n,m;scanf("%d%d",&n,&m);
		int a[n][m],b[n*m];
		int x=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int count=0;
		int vong=1;
		int i=0,j=0;
		while(count+1<=n*m)
		{
			if(count+1==n*m)
			{
				b[count]=a[i][j];
				break;
			}
			for(j;j<m-vong;j++) b[count++]=a[i][j];
			if(count+1==n*m)
			{
				b[count]=a[i][j];
				break;
			}
			for(i;i<n-vong;i++) b[count++]=a[i][j];
			if(count+1==n*m)
			{
				b[count]=a[i][j];
				break;
			}
			for(j;j+1-vong>0;j--) b[count++]=a[i][j];
			if(count+1==n*m)
			{
				b[count]=a[i][j];
				break;
			}
			for(i;i+1-vong>0;i--) b[count++]=a[i][j];
			i++;
			j++;
			vong++;
		}
		for(int h=0;h<n*m;h++) printf("%d ",b[h]);
		printf("\n");
	}
}