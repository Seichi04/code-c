#include<stdio.h>
int giaithua(int a)
{
		int tich=1;
		for(int i=1;i<=a;i++)
		{
			tich*=i;
		}
		return tich;
}
int main()
{
	int a; scanf("%d",&a);
	int x=a;
	int sum=0;
	while(x!=0)
	{
		sum+=giaithua(x%10);
		x/=10;
	}
	printf("%d",(sum==a)?1:0);
}