#include<stdio.h>
int main()
{
	int h=0,c=0;scanf("%d %d",&h,&c);
	int a[h][c];
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int b[c][h];
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<h;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<h;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}