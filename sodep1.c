#include<stdio.h>
#include<math.h>
int checknguyento(int a)
{
	int dem=0;
	if(a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
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
int checkfibo(int a)
{
	int x=0,tg;
	int y=1;
	while(y<a)
	{
			tg=y;
			y+=x;
			x=tg;
	}
	if(y==a) return 1;
	else return 0;
}
int main()
{
	int m=0,n=0;scanf("%d %d",&m,&n);
	if(m>n)
	{
		int temp=m;
		m=n;n=temp;
	}
	for(int i=m;i<=n;i++)
	{
		int dem=0;
		int sum=0,b=i;
		while(b!=0)
		{
			sum+=b%10;
			b/=10;
		}
		if(checkfibo(sum)==1 && checknguyento(i)==1) printf("%d ",i);
	}
}