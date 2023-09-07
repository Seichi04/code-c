#include<stdio.h>
void chanle(int a)
{
	int le=0,chan=0;
	while(a!=0)
	{
		((a%10)%2==0)?chan++:le++;
		a/=10;
	}
	printf("%d %d\n",le,chan);
}
int main()
{
	int n; scanf("%d",&n);
	int a[n-1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		chanle(a[i]);
	}
}