#include<stdio.h>
int UCLN(int a,int b)
{
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a=0,b=0; scanf("%d %d",&a,&b);
		int c=0,d=0; scanf("%d %d",&c,&d);
		if(UCLN(a,b)==UCLN(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}