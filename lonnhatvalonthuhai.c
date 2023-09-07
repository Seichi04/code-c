#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	int max2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==max) continue;
		if(a[i]>max2) max2=a[i];
	}
	printf("%d %d",max,max2);
}