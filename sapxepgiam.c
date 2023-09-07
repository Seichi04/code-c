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
		int max=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[max]) (max=j);
		}
		int temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}