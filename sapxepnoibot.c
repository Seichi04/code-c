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
	int count=5;int stt=1;
	while(count!=0)
	{
		count=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1]) 
			{
				swap(&a[i],&a[i+1]);
				count++;
			}
		}
		printf("Buoc %d: ",stt++);
		int x=0;
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
			if(i<n-1 && a[i]>a[i+1]) x++; 
		}
		printf("\n");
		if(x==0) break;
	}
}