#include<stdio.h>
#include<math.h>
void sort(long long *a)
{
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min]) min=j;
		}
		if(min!=i)
		{
			long long temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n;scanf("%d",&n);
		long long a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			//a[i]=a[i]*a[i];
		}
		
		sort(a);
		for(int i=0;i<n;i++)
		{
			printf("%lld ",a[i]);
		}
		printf("\n");
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				long long huyen=a[i]+a[j];
				if(sqrt(huyen)==(long long)sqrt(huyen))
				{
					for(int k=j+1;k<n;k++)
					{
						if(a[k]==huyen)
						{
							printf("YES\n");
							goto label;
						}
					}
				}
				
			}
		}
		printf("NO\n");
		label: continue;
	}
	
}