#include<stdio.h>
int main()
{
	int c,r; scanf("%d %d",&c,&r);
	int max=r;
	int a[10][10];
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			a[i][j]= i+j;
			if(i+j>=max) a[i][j]=max-1;
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%c",a[i][j]+64);
		}
		printf("\n");
	}
	
}
