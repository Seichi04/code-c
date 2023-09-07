#include<stdio.h>
#include<string.h>
int main()
{
	int c,r; scanf("%d %d",&c,&r);
	int a[10][10];
	int b=(c>=r)?(c):(r);
	int h=b;
	for(int i=0;i<h;i++)
	{
		for(int j=i;j<h;j++)
		{
			a[i][j]= b+96;
			a[j][i]=a[i][j];
		}
		b--;
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}