#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int j=6;j<n;j++)
	{
		int sum=1;
		for(int i=2;i<=j/i;i++)
		{
			if(j%i==0) sum=sum+i+j/i;
		}
		if(sum==j) printf("%d ",j);
	}	
}