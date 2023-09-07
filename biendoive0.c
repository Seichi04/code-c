#include<stdio.h>
int main()
{
	int n;scanf("%d",&n);
	int a[n][n];
	char s[20];
	for(int i=0;i<n;i++)
	{
		
		scanf("%s",s);
		for(int j=0;j<n;j++)
		{
			a[i][j]=s[j]-48;
		}
	}
	int dem=0;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(a[i][j]==1) 
			{
				for(int h=0;h<=i;h++)
				{
					for(int k=0;k<=j;k++)
					{
						if(a[h][k]==1) a[h][k]=0;
						else a[h][k]=1;
					}
				}
				dem++;	
			}
		}	
	}
	printf("%d",dem);
}