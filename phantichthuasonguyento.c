#include<stdio.h>
void phantich(int a)
{
	int x=a;
	for(int i=2;i<=x;i++)
	{
		while(x%i==0)
		{
			printf(" %d ",i);
			x/=i;
		}
	}
}
int main()
{
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a; scanf("%d",&a);
		phantich(a);
		printf("\n");
	}
}