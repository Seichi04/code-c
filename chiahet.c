#include<stdio.h>
int main()
{
	int n=0,k=0;scanf("%d %d",&n,&k);
	int dem=0;
	for(int i=2;i<=n;i+=2)
	{
		int a=i;
		while(a%2==0)
		{
			dem++;
			a/=2;
		}
	}
	if(dem>=k) printf("Yes");
	else printf("No");
}