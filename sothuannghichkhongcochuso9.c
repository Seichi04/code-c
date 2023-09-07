#include<stdio.h>
#include<math.h>
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
int check9(int i)
{
	while(i!=0)
	{
		if(i%10==9) return 0;
		i/=10;
	}
	return 1;
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
	int n=0;scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++)
	{
		if(check9(i)==0) continue;
		if(thuannghich(i,chuso(i))!=i) continue;
		printf("%d ",i);
		dem++;
	}
	printf("\n%d",dem);
}