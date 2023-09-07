#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%lld",&a);
		if(a%2!=0)
		{
			printf("NO\n");
			continue;
		}
		long long b=a;
		int demc=0,deml=0;
		while(b!=0)
		{
			if((b%10)%2==0) demc++;
			else deml++;
			b/=10;
		}
		if(demc>deml) printf("YES\n");
		else printf("NO\n");
	}
}