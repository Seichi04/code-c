#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%lld",&a);
		long long b=0;
		for(int i=2;i<=sqrt(a);i++)
		{
			while(a%i==0)
			{
				b=i;
				a/=i;
			}
			if(a!=1)
			{
				b=a;
			}
		}
		printf("%lld\n",b);
	}
}