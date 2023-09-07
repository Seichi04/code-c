#include<stdio.h>
#include<math.h>
int checkdk(int a)
{
	int x=0;
	int dem6=0;
	while(a!=0)
	{
		int y=a%10;
		if(y==6) dem6++;
		x+=y;
		a/=10;
	}
	if(dem6>0 && x%10==8) return 1;
	else return 0;
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
int chuso(int i)
{
	int dem=0;
	while(i!=0)
	{
		dem++;
		i/=10;
	}
	return dem;
}
int main()
{
		int a=0,b=0;scanf("%d %d",&a,&b);
		if(a>b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		for(int i=a;i<=b;i++)
		{
			if(checkdk(i)==0) continue;
			if(thuannghich(i,chuso(i))!=i) continue;
			printf("%d ",i);
		}
}