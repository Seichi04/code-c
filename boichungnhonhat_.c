#include<stdio.h>
#include<math.h>
int hammax(int h,int a[h])
{
	int max=0;
	for(int i=0;i<h;i++)
	{
		if(a[i]>max) max=a[i];
	}
	return max;
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0,m=0;scanf("%d%d",&n,&m);
		if(n>m)
		{
			int temp=n;
			n=m;m=temp;
		}
		int h=m-n+1;
		int a[h];
		for(int i=0;i<h;i++)
		{
			a[i]=n;
			n++;
		}
		long long boi=1;
		int max=hammax(h,a);
		for(int u=2;u<=max;u++)
		{
			int b[h];
			for(int i=0;i<h;i++)
			{
				b[i]=0;
			}
			for(int i=0;i<h;i++)
			{
				while(a[i]%u==0)
				{
					b[i]++;
					a[i]/=u;
				}
			}
			if(hammax(h,b)!=0) boi*=(pow(u,hammax(h,b)));
			max=hammax(h,a);
		}
		printf("%lld\n",boi);
	}
	
}