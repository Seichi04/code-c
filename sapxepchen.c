#include<stdio.h>
void swap(int a[],int k,int dem)
{
	int temp=a[k];
	for(int i=k;i>=dem;i--)
	{
		if(i==dem) a[i]=temp;
		else a[i]=a[i-1];
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
	int h=1;
	for(int i=0;i<n;i++)
	{
		int p=0;
		for(int j=0;j<i;j++)
		{
			if(a[i]>=a[j] && a[i]<=a[j+1])
			{
				p=j+1;
				break;
			}
		}
		swap(a,i,p);
		printf("Buoc %d: ",i);
		for(int j=0;j<=i;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}