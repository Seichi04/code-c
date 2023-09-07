#include<stdio.h>
#include<string.h>
#include<math.h>
long long chuyenso(int x,char a[x])
{
	long long so=0;
	for(int i=0;i<x;i++)
	{
		so=so+((int)a[i]-48)*pow(10,x-i-1);
	}
	return so;
}
long long max(int x,char a[x])
{
	for(int i=0;i<x;i++)
	{
		if(a[i]=='5') a[i]='6';
	}
	return chuyenso(x,a);
}
long long min(int x,char a[x])
{
	for(int i=0;i<x;i++)
	{
		if(a[i]=='6') a[i]='5';
	}
	return chuyenso(x,a);
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		char a[19];char b[19];
		scanf("%s %s",&a,&b);
		int x=strlen(a);
		int y=strlen(b);
		printf("%lld ",min(x,a)+min(y,b));
		printf("%lld\n",max(x,a)+max(y,b));
	}
	return 0;
}