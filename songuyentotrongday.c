#include<stdio.h>
#include<math.h>
int checknguyento(int a)
{
	if(a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}
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
			if(checknguyento(a[i])==1) printf("%d ",a[i]);
		}
		printf("\n");
	}
}