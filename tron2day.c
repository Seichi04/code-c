#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[n]);
		}
		//for(int i=0;i<n;i++)
		//{
		//	scanf("%d",&b[n]);
		//}
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		//printf("\n");
		//for(int i=0;i<n;i++)
		//{
		//	printf("%d ",b[i]);
		//}
		//printf("\n");
		/*printf("Test %d:\n",k+1);
		for(int i=0;i<n;i++)
		{
			int min=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[min]) min=j;
			}
			swap(&a[i],&a[min]);
		}
		for(int i=0;i<n;i++)
		{
			int max=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>b[max]) max=j;
			}
			swap(&b[i],&b[max]);
		}
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		for(int i=0;i<n;i++)
		{
			printf("%d ",b[i]);
		}*/
	}
}