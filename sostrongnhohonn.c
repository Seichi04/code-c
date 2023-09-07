#include<stdio.h>
int giaithua(int a)
{
	int m=1;
	for(int i=1;i<=a;i++)
	{
		m*=i;
	}
	return m;
}
int main()
{
	int n=0; scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		int x=i;
		while(x!=0)
		{
			sum+=giaithua(x%10);
			x/=10;
		}
		if(sum==i) 
		{
			printf("%d ",i);
		}
	}
}