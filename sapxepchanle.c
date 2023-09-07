#include<stdio.h>
void xuat(int n,int a[n])
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min]) (min=j);
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int en[n],on[n];
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			en[x]=a[i];
			x++;
		}
		else
		{
			on[y]=a[i];
			y++;
		}
	}
	xuat(x,en);
	xuat(y,on);
	/*for(int i=0;i<x;i++)
	{
		printf("%d ",en[i]);
	}
	for(int i=0;i<y;i++)
	{
		printf("%d ",on[i]);
	}*/
	
}