#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		int x=a%10;
		int y;
		while(a>=10)
		{
			a/=10;
			y=a;
		}
		if(x==y) printf("YES\n");
		else printf("NO\n");
	}
}