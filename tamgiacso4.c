#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0,x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-x;j++)
		{
			printf("~");
		}
		int b=1;
		for(int j=0;j<=a;j++)
		{
			if(j<x)
			{
				printf("%d",b);
				b+=2;
			}
			if(j==x) printf("%d",b);
			if(j>x)
			{
				b-=2;
				printf("%d",b);
			}
		}
		a+=2;
		x++;
		printf("\n");
	}
}