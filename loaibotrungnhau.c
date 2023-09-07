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
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int h=j;h<n;h++)
				{
					a[h]=a[h+1];
				}
				n--;
				j--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}