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
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j][0]<a[min][0]) min=j;
		}
		swap(&a[min][0],&a[i][0]);
		swap(&a[min][1],&a[i][1]);
	}
	int t=a[0][0];
	for(int i=0;i<n;i++)
	{
		if(a[i][0]>t) t=a[i][0];
		t=t+a[i][1];
	}
	printf("%d",t);
}