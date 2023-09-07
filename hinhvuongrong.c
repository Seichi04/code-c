#include<stdio.h>
int line(n)
{
	for(int k=0;k<n;k++)
	{
		printf("*");
	}
	printf("\n");
}
int main()
{
	int n;scanf("%d",&n);
	line(n);
	for(int i=1;i<n-1;i++)
	{
		printf("*");
		for(int j=1;j<n-1;j++) printf(".");
		printf("*\n");
	}
	line(n);	
}