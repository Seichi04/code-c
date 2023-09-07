#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int x=0;x<n;x++)
	{
		int h=0,k=0;scanf("%d %d",&h,&k);
		int p=0;scanf("%d",&p);
		int a[h],b[k];
		for(int i=0;i<h;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<k;i++)
		{
			scanf("%d",&b[i]);
		}
		printf("Test %d:\n",x+1);
		for(int i=0;i<p;i++)
		{
			printf("%d ",a[i]);
		}
		for(int i=0;i<k;i++)
		{
			printf("%d ",b[i]);
		}
		for(int i=p;i<h;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}