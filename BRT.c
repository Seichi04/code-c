#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		long long a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			int j=i-1,key=a[i];
			while(j>=0 && a[j]>key)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=key;
		}
		int dem=1;
		long long kc=a[1]-a[0];
		for(int i=1;i<n-1;i++)
		{
			if(a[i+1]-a[i] <kc) 
			{
				kc=a[i+1]-a[i];
				dem=1;
			}
			else if(a[i+1]-a[i] ==kc) dem++;
		}
		printf("%lld %d\n",kc,dem);
	}
}