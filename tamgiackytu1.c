#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0;int b=1;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(int j=0;j<=a;j++)
			{
				printf("%c ",b+96);
				b++;
			}
		}
		if(i%2==0)
		{
			b+=(a);
			int c=b;
			for(int j=0;j<=a;j++)
			{
				printf("%c ",c+96);
				c--;
			}
			b++;
		}
		a++;
		printf("\n");
	}
}