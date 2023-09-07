#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int k=1;k<n;k++)
	{
		printf("Buoc %d: ",k);
		for(int i=k;i<n;i++)
		{
			if(a[k-1]>a[i]) swap(&a[k-1],&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}