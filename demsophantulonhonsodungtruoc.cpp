#include<stdio.h>
int main()
{
	int n;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int m=0;scanf("%d",&m);
		int a[m];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int dem=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]>=a[i-1]) dem++;
		}
		printf("%d\n",dem);
	}
}