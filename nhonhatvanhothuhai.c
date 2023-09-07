#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
	}
	printf("%d",min);
	int min2=max;
	for(int i=1;i<n;i++)
	{
		if(min2>a[i] && a[i]>min) min2=a[i];
	}
	printf(" %d",min2);
}