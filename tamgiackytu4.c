#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0,x=0;
	for(int i=0;i<n;i++)
	{
		int b=1;
		for(int j=0;j<=a;j++)
		{
			if(j<x)
			{
				printf("%c",b+63);
				b+=2;
			}
			if(j==x) printf("%c",b+63);
			if(j>x)
			{
				b-=2;
				printf("%c",b+63);
			}
		}
		a+=2;
		x++;
		printf("\n");
	}
}