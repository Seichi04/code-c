#include<stdio.h>
int checksogiam(long long i)
{
	int dem=0;
	if(i<10) return 0;
	while(i>=10)
	{
		int a=i%10;
		int b=(i/10)%10;
		if(a>=b) dem=1;;
		i/=10;
	}
	if(dem==0) return 1;
	else return 0;
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0,b=0;scanf("%lld %lld",&a,&b);
		int dem=0;
		for(long long i=a;i<=b;i++)
		{
			if(checksogiam(i)==1) 
			{
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}