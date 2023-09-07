#include<stdio.h>
#include<math.h>
int sum(int a)
{
	int x=0;
	while(a!=0)
	{
		x+=a%10;
		a/=10;
	}
	return x;
}
int thuannghich(int i,int a)
{
	int x=0;
	while(i!=0)
	{
		x=x+(i%10)*pow(10,a-1);
		i/=10;
		a--;
	}
	return x;
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a=0;scanf("%d",&a);
		int b=pow(10,a-1);
		int c=pow(10,a);
		int dem=0;
		for(int i=b;i<c;i++)
		{
			if(sum(i)%10!=0) continue;
			if(thuannghich(i,a)==i) dem++;
		}
		printf("%d\n",dem);
	}
}