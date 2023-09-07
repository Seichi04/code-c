#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a=0,b=0,c=0,d=0;scanf("%d %d %d %d",&a,&b,&c,&d);
		if((c-a)==(d-b)) printf("YES\n");
		else printf("NO\n");
	}
}