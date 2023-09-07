#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int h=0;scanf("%d",&h);
		int a[h];
		for(int i=0;i<h;i++)
		{
			scanf("%d",&a[i]);
		}
		int max=a[0];
		for(int i=0;i<h;i++)
		{
			if(max<a[i]) max=a[i];
		}
		printf("%d\n",max);
		for(int i=0;i<h;i++)
		{
			if(a[i]==max) printf("%d ",i);
		}
		printf("\n");
	}
}