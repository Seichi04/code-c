#include<stdio.h>
#include<math.h>
int maxm(int b[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<b[i]) max=b[i];
	}
	return max;
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int b[n];
		for(int i=0;i<n;i++)
		{
			b[i]=i+1;
		}
		long boi=1;
		for(int i=2;maxm(b,n)!=1;i++)
		{
			int max=0;
			for(int j=0;j<n;j++)
			{
				int dem=0;
				while(b[j] % i ==0)
				{
					dem++;
					b[j]/=i;
				}
				if(dem>max) max=dem;
			}
			if(max!=0) boi*=pow(i,max);
		}
		printf("%ld\n",boi);
	}
}