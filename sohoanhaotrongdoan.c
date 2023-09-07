#include<stdio.h>
int main()
{
	int n=0,m=0;scanf("%d %d",&n,&m);
	if(n>m)
	{
		int temp=n;
		n=m;
		m=temp;
	}
	for(int j=(n>1)?(n):(2);j<=m;j++)
	{
		int sum=1;
		for(int i=2;i<j/i;i++)
		{
			if(j%i==0) sum=sum+i+j/i;
		}
		if(sum==j) printf("%d ",j);
	}	
}