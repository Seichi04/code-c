#include<stdio.h>
#include<math.h>
int checknto(int a)
{
	int dem=0;
	if (a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			dem++;
			break;
		}
	}
	if(dem==0) return 1;
	else return 0;
}

int main()
{
	int n=0;scanf("%d",&n);
	int a[n][n],b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=0;
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(checknto(a[i][j]) == 1 ) b[i]++;
			else a[i][j]=0;
		}
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]>b[max]) max=i;
	}
	printf("%d\n",max+1);
	for(int j=0;j<n;j++)
	{
		if(a[max][j] != 0 ) printf("%d ",a[max][j]);
	}
}