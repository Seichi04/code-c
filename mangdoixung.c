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
		int dem=0;
		for(int i=0;i<(float)(N-1)/2;i++)
		{
			if(a[i]==a[N-1-i]) dem++;
		}
		if(dem==(int)N/2) printf("YES\n");
		else printf("NO\n");
	}
}