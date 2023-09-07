#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10];
	int c,r; scanf("%d %d",&c,&r);
	int b;
	(c>=r)?(b=c):(b=r);
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<r;j++)
		{
			if(b-i-j<=0) a[i][j]=abs(b-i-j)+2;
			else a[i][j]= abs(b-i-j);
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