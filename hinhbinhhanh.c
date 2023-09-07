#include<stdio.h>
void line(int n)
{
	for(int k=0;k<n;k++)
	{
		printf("*");
	}
	printf("\n");
}
int main()
{
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m=n-i;
		for(int j=0;j<m-1;j++)
		{
			printf("~");
		}
		line(n);
	}
	
}