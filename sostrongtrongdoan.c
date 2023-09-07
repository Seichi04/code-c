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
	int n=0,m=0; scanf("%d %d",&n,&m);
	if(n>m)
	{
		int temp=n;
		n=m;
		m=temp;
	}
	for(int i=n;i<=m;i++)
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