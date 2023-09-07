#include<stdio.h>
int main()
{
	int n,m,k;scanf("%d%d%d",&n,&m,&k);
	int light[m];
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&light[i]);
		int x=((light[i]-k)>0)?(light[i]-k):0;
		int y=((light[i]+k)<=n-1)?(light[i]+k):(n-1);
		for(int j=x;j<=y;j++)
		{
			a[j]=1;
		}	
	}
	int start=0;
	int end=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1 && a[i+1]==0) start=i;
		if(a[i]==0 && (a[i+1]==1 || i==n-1))
		{
			end=i;
			int kc;
			if(i==n-1) kc=end-start;
			else kc=end+1-start;
			if(kc%(2*k)==0) count+=(kc/(2*k));
			else count+=(kc/(2*k)+1);
			end=0;
			start=0;
			
		}
	}
	printf("%d",count);
}