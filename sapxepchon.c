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
		int min=k-1;
		for(int i=k;i<n;i++)
		{
			if(a[i]<a[min]) min=i;
		}
		swap(&a[k-1],&a[min]);
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}