#include<stdio.h>
int main()
{
	int m=0; scanf("%d",&m);
	for(int k=0;k<m;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int dem=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1]) dem++;
		}
		printf("%d\n",dem);
	}
	
}