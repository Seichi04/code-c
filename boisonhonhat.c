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
int BCNN(int a,int b)
{
	return (a*b)/UCLN(a,b);
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int a=0,b=0;scanf("%d%d",&a,&b);
		if(a>b)
		{
			int temp=a;
			a=b;b=temp;
		}
		int boi=BCNN(a,a+1);
		for(int i=a+2;i<=b;i++)
		{
			if(boi%i!=0) boi=BCNN(boi,i);
		}
		printf("%d\n",boi);
	}
}