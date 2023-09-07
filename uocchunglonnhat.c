#include<stdio.h>
int UCLN(int a,int b)
{
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main()
{
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a,b; scanf("%d %d",&a,&b);
		printf("%d\n",UCLN(a,b));
	}
}