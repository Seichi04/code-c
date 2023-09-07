#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0,x=0;
	for(int i=1;i<=n;i++)
	{
		int b=2;
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
		x++;
		a+=2;
		printf("\n");
	}
}