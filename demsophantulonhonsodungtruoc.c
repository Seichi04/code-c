#include<stdio.h>
int main()
{
	int t;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int dem=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]>a[i]) goto next;
			}
			dem++;
			next: continue;
		}
		printf("%d\n",dem);
	}
}