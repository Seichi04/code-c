#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%lld",&a);
		long long x=a;
		int dem=0;
		while(x>=10)
		{
			dem++;
			x/=10;
		}
		int z=a%10;
		a=(a-x*pow(10,dem))/10;
		long long a1=a;
		dem-=2;
		if(2*x==z||x==2*z)
		{
			long long y=0;
			while(a!=0)
			{
				int b=a%10;
				y+=b*pow(10,dem);
				dem--;
				a/=10;
			}
			printf("%s",(y==a1)?("YES\n"):("NO\n"));
		}
		else printf("NO\n");
	}
}