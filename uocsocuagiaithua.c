#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int N=0,p=0;scanf("%d %d",&N,&p);
		int dem=0;
		for(int i=1;i<=N;i++)
		{
			int a=i;
			while(a%p==0)
			{
				dem++;
				a/=p;
			}
		}
		printf("%d\n",dem);
	}
}