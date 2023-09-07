#include<stdio.h>
#include<math.h>
int checknguyento(int a)
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
int nextnto(int x)
{
	x++;
	while(checknguyento(x)==0)
	{
		x++;
	}
	return x;
}
int main()
{
		int t=0;scanf("%d",&t);
		for(int l=0;l<t;l++)
		{
		int n=0;scanf("%d",&n);
		int a[n][n];
		for(int h=0;h<n;h++)
		{
			for(int k=0;k<n;k++)
			{
				a[h][k]=0;
			}
		}
		int x=0;
		int dem=1;
		int y=n*n;
		int i=0,j=0;
		while(dem<=y)
		{
			while(a[i][j]==0 && j<n)
			{
				x=nextnto(x);
				a[i][j]=x;
				dem++;
				j++;
			}
			j--;
			i++;
			while(a[i][j]==0 && i<n)
			{
				x=nextnto(x);
				a[i][j]=x;
				dem++;
				i++;
			}
			i--;
			j--;
			while(a[i][j]==0 && j>=0)
			{
				x=nextnto(x);
				a[i][j]=x;
				dem++;
				j--;
			}
			j++;
			i--;
			while(a[i][j]==0 && i>=0)
			{
				x=nextnto(x);
				a[i][j]=x;
				dem++;
				i--;
			}
			i++;
			j++;
		}
		printf("Test %d:\n",l+1);
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
	}
	
}