#include<stdio.h>
int checkfibo(long long a)
{
	if(a==0) return 1;
	long long x=0,y=1;
	while(y<a)
	{
		long long temp=y;
		y+=x;
		x=temp;
	}
	if(y==a) return 1;
	else return 0;
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%lld",&a);
		printf("%s\n",(checkfibo(a)==1)?("YES"):("NO"));
	}
}