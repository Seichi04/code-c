#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10];
	int c,r; scanf("%d %d",&c,&r);
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			a[i][j]= abs(i-j)+1;
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}