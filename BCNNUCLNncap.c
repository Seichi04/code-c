#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		long long a,b; scanf("%lld %lld",&a,&b);
		long long c=a*b;
		if(a<1 || b<1) return 0;
		while(a!=b)
		{
			if(b>a) b=b-a;
			else a=a-b;
		}
		printf("%lld ",c/a);
		printf("%lld\n",a);	
	}
	
}