#include<stdio.h>
int main()
{
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		long long a=0;scanf("%lld",&a);
		int x,y,dem=0;
		while(a>=10)
		{
			y=a%10;
			x=(a/10)%10;
			if(x>y) 
			{
				dem++;
				break;
			}
			a/=10;
		}
		printf("%s",(dem==0)?("YES\n"):("NO\n"));
	}
	
}