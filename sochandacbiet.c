#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		long long m=0;scanf("%lld",&m);
		int dem=0;
		while(m!=0)
		{
			if(m%2!=0)
			{
				dem++;
			}
			m/=10;
		}
		printf("%s",(dem==0)?("YES\n"):("NO\n"));
	}
}