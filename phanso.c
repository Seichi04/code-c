#include<stdio.h>
#include<math.h>
long UCLN(long long x,long long  y)
{
	while(x!=y)
	{
		if(x>y) x=x-y;
		else y=y-x;
	}
	return x;
}
long long BCNN(long long x,long long y)
{
	return (x*y)/UCLN(x,y);
}
int main()
{
	long long t=0;scanf("%lld",&t);
	for(long long k=0;k<t;k++)
	{
		long long a=0,b=0,c=0,d=0;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		int n=UCLN(a,b),m=UCLN(c,d);
		a=a/n;b=b/n;
		c=c/m;d=d/m;
		a*=BCNN(b,d)/b;
		b=BCNN(b,d);
		c*=BCNN(b,d)/d;
		d=BCNN(b,d);
		printf("Case #%lld:\n",k+1);
		printf("%lld/%lld %lld/%lld\n",a,b,c,d);
		long long x=UCLN(a+c,b);
		printf("%lld/%lld\n",(a+c)/x,b/x);
		long long y=UCLN(a,c);
		printf("%lld/%lld\n",a/y,c/y);
	}
	return 0;
}