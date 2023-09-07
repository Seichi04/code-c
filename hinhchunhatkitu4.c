#include<stdio.h>
int main()
{
	int c,r; scanf("%d %d",&c,&r);
	int max=(c>=r)?(c):(r);
	int a[10][10];
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			if(c+(j-i)>r) a[i][j]=r;
			else(a[i][j]=c+(j-i));
			
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
