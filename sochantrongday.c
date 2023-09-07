#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int N=0;scanf("%d",&N);
		int a[N];
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<N;i++)
		{
			if(a[i]%2==0) printf("%d ",a[i]);
		}
		printf("\n");
	}
}