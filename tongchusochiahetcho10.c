#include<stdio.h>
#include<string.h>
int checktong(int a)
{
	int sum=0;
	while(a!=0)
	{
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int main()
{
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a; scanf("%d",&a);
		if(checktong(a)%10==0) printf("YES\n");
		else printf("NO\n");
	}
}