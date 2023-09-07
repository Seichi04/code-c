#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int l=0;l<n;l++)
	{
		int N=0,M=0;scanf("%d %d",&N,&M);
		int j=0;scanf("%d",&j);int i=j-1;
		int a[N][M];
		for(int h=0;h<N;h++)
		{
			for(int k=0;k<M;k++)
			{
				scanf("%d",&a[h][k]);
			}
		}
		for(int h=0;h<N;h++)
		{
			int min=h;
			for(int x=h+1;x<N;x++)
			{
				if(a[min][i]>a[x][i]) min=x;
			}
			int temp=a[h][i];
			a[h][i]=a[min][i];
			a[min][i]=temp;
		}
		for(int h=0;h<N;h++)
		{
			for(int k=0;k<M;k++)
			{
				printf("%d ",a[h][k]);
			}
			printf("\n");
		}
	}
}