#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j] && j<i ) break;
			if(a[i]==a[j]) dem++;
		}
		if(dem>0)	printf("%d %d\n",a[i],dem);
	}
}