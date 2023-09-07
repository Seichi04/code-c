#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0;int x=1;
	for(int i=0;i<n;i++)
	{
		int b=x;
		int kc=n-1;
		for(int j=0;j<=a;j++)
		{
				printf("%d",b);
				b+=kc;
				kc--
		}
		a++;
		x++;
		printf("\n");
	}
}