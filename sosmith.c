#include<stdio.h>
int tongchuso(long a)
{
	int sum=0;
	while(a!=0)
	{
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int tongnguyento(long a)
{
	int sum=0;
	while(a%2==0)
	{
		sum+=2;
		a/=2;
	}
	for(int i=3;i<=a;i+=2)
	{
		while(a%i==0)
		{
			sum+=tongchuso(i);
			a/=i;
		}
	}
	return sum;
}
int main()
{
	long a=0;scanf("%ld",&a);
	if(tongchuso(a)==tongnguyento(a)) printf("YES");
	else printf("NO");
}