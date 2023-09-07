#include<stdio.h>
int main()
{
	int m=0;scanf("%d",&m);
	for(int k=0;k<m;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Test %d:\n",k+1);
		for(int i=0;i<n;i++)
		{
			int dem=0;
			for(int j=0;j<n;j++)
			{
				if(a[i]==a[j] && j<i ) break;
				if(a[i]==a[j]) dem++;
			}
			if(dem>0)	printf("%d xuat hien %d lan\n",a[i],dem);
		}
	}
	
}