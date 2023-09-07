#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%lld",&a);
		int dem=0;
		if(a%2==0) dem+=1;
		else goto label;
		for(long long i=2;i<=sqrt(a);i+=2)
		{
			if(a%i==0)
			{
				if((a/i)%2==0 && a/i!=i) dem+=2;
				else dem++;
			}
		}
		label: printf("%d\n",dem);
	}
}