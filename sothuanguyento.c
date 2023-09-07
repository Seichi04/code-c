#include<stdio.h>
#include<math.h>
int checknt(long a)
{
	int dem=0;
	if (a==1) return 0;
	for(long i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			dem++;
			break;
		}
	}
	if(dem==0) return 1;
	else return 0;
}
int checksum(long x)
{
	int sum=0;
	while(x!=0)
	{
		sum+=(x%10);
		x/=10;
	}
	if(checknt(sum)==1) return 1;
	else return 0;
}
int checkpt(long x)
{
	while(x!=0)
	{
		int a=x%10;
		if(a==0||a==1||a==4||a==6||a==8 ||a==9) return 0;
		x/=10;
	}
	return 1;
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		long a=0,b=0;scanf("%ld%ld",&a,&b);
		if(a>b)
		{
			long temp=a;
			a=b;
			b=temp;
		}
		int dem=0;
		for(long i=a;i<=b;i++)
		{
			if(checksum(i)==0) continue;
			if(checkpt(i)==0) continue;
			if(checknt(i)==0) continue;
			dem++;
		}
		printf("%d\n",dem);
	}
	
}