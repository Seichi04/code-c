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
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(checknguyento(a[i])==1) dem++;
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++)
	{
		if(checknguyento(a[i])==1) printf("%d ",a[i]);
	}
}