#include<stdio.h>
int main()
{
	int t;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n,m;scanf("%d%d",&n,&m);
		int a[n][m],count1c[n],count2c[n],count1h[m],count2h[m];
		char s[1005];
		for(int i=0;i<n;i++)
		{
			scanf("%s",s);
			int dem1=0,dem2=0;
			for(int j=0;j<m;j++)
			{
				a[i][j]=s[j]-48;
				if(a[i][j]==1) dem1++;
				if(a[i][j]==2) dem2++;
			}
			count1c[i]=dem1;
			count2c[i]=dem2;
		}
		for(int j=0;j<m;j++)
		{
			int dem1=0,dem2=0;
			for(int i=0;i<n;i++)
			{
				if(a[i][j]==1) dem1++;
				if(a[i][j]==2) dem2++;
			}
			count1h[j]=dem1;
			count2h[j]=dem2;
		}
		int dem=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==1)
				{
					dem+=count2c[i]*count2h[j];
				}
				if(a[i][j]==2)
				{
					dem+=count1c[i]*count1h[j];
				}
			}
		}
		printf("%d\n",dem);
	}
	
}