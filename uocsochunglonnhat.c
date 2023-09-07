#include<stdio.h>
int ucln(int a,int b)
{
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int bcnn(int a,int b)
{
	return (a*b)/ucln(a,b);
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int b[n+1];
		for(int i=0;i<n+1;i++)
		{
			if(i==0) b[i]=a[i];
			else if(i==n) b[i]=a[i-1];
			else b[i]=bcnn(a[i],a[i-1]);
		}
		for(int i=0;i<n+1;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
	}
	
}