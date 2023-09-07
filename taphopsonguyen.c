#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n=0,m=0;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				i--;
				n--;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		for(int j=0;j<i;j++)
		{
			if(b[j]==b[i])
			{
				i--;
				m--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min]) min=j;
		}
		swap(&a[min],&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		int min=i;
		for(int j=i+1;j<m;j++)
		{
			if(b[j]<b[min]) min=j;
		}
		swap(&b[min],&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d ",a[i]);
			}
		}
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				dem++;
			}
		}
		if(dem==0) printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<m;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				dem++;
			}
		}
		if(dem==0) printf("%d ",b[i]);
	}
}