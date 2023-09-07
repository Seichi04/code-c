#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		int a[10]={1000,500,200,100,50,20,10,5,2,1};
		int dem=0;
		for(int i=0;i<10;i++)
		{
			dem=dem+n/a[i];
			n%=a[i];
		}
		printf("%d\n",dem);
	}
}