#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%d",&a);
		int u=0;
		while(a%2==0)
		{
			u=2;
			a/=2;
		}
		for(int i=3;i<=a;i++)
		{
			while(a%i==0)
			{
				u=i;
				a/=i;
			}
		}
		printf("%d\n",u);
	}
}