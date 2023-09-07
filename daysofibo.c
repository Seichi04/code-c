#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int h=0;scanf("%d",&h);
		long long a[h];
		a[0]=1;
		a[1]=1;
		for(int i=2;i<h;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		printf("%lld\n",a[h-1]);
	}
}