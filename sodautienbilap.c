#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		long long n=0;scanf("%lld",&n);
		long long a[n];
		for(long long i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(long long i=0;i<n;i++)
		{
			for(long long j=i+1;j<n;j++)
			{
				if(a[j]==a[i]) 
				{
					printf("%lld\n",a[i]);
					goto next;
				}
			}
		}
		printf("NO\n");
		next: continue;
	}
	
}