#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int dem1=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j] && j<i ) break;
			if(a[i]==a[j]) dem++;
		}
		if(dem>1) 
		{
			dem1++;
			printf("%d ",a[i]);
		}
		
	}
	if(dem1==0) printf("0");
}