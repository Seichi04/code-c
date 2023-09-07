#include<stdio.h>
#include<math.h>
int checknguyento(int a)
{
	int dem=0;
	if(a==1) return 0;
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
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(checknguyento(a[i][j])==1)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("\n%d",sum);
}